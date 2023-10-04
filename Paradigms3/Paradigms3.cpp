#include <string>
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


int main()
{
    std::cout << Encrypt("Hsello, World!", 3);

}

