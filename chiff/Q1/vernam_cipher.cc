#include <iostream>

std::string vernam_cipher(std::string key, std::string message)
{
    int length = key.length();
    
    std::string result = "";

    for (int i = 0; i < length; ++i)
    {
        result += key[i] ^ message[i];
    }

    return result;
}

int main()
{
    std::string M = "HELLO";
    std::string K = "pizza";

    std::string C = vernam_cipher(M, K);

    std::cout << C << std::endl;

    return 0;
}