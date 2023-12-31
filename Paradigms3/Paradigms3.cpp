﻿#include <string>
#include <iostream>



std::string Encrypt(std::string str, int key) {

    std::string encrypted = str;


    for (int i = 0; i < encrypted.size(); i++)
    {
        if (std::isalpha(encrypted[i])) {
            char base = 'a';
            if (std::isupper(encrypted[i]) == true) {
                base = 'A';
            }
            encrypted[i] = static_cast<char>(base + (encrypted[i] - base + key) % 26);
        }
    }


    return encrypted;
}

std::string Decrypt(std::string str, int key) {
    std::string decrypted = str;

    for (int i = 0; i < decrypted.size(); i++)
    {
        if (std::isalpha(decrypted[i])) {
            char base = 'a';
            if (std::isupper(decrypted[i]) == true) {
                base = 'A';
            }
            decrypted[i] = static_cast<char>(base + (decrypted[i] - base - key + 26) % 26);
        }
    }


    return decrypted;
}


int main()
{
    
    std::cout << Encrypt("Hello, World!", 3);
    std::cout << Decrypt("Khoor, Zruog!", 3);
}

