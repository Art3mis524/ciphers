#include <iostream>
#include <string>

const int SHIFT = 3;
const int MAX = 126;
const int MIN = 36;

std::string getUserInput()
{
    std::string str;
    std::cout << "enter string" << std::endl;
    std::getline(std::cin, str);
    return str;
}

char getAsciiValue(char character)
{
    int ascii = character;
    std::cout << ascii << std::endl;
    return ascii;
}

std::string encrypt(std::string str)
{
    std::string encryptedString;
    for (int i = 0; i < str.size(); i ++)
    {
        char character;
        int asciiValue = getAsciiValue(str[i]);
        if (asciiValue != 32 && asciiValue > MIN) //32 is a space
        {
            asciiValue = asciiValue - SHIFT;
            character = asciiValue;
            encryptedString.insert(i, 1, character);
        }
        
        else if (asciiValue != 32 && asciiValue < MIN)
        {
            asciiValue = asciiValue + 94;
            asciiValue = asciiValue - SHIFT;
            character = asciiValue;
            encryptedString.insert(i, 1, character);
        }
        else
        {
            character = asciiValue;
            encryptedString.insert(i, 1, character);
        }
    }
    return encryptedString;
}

int main()
{
    std::string name;
    std::string strToEncrypt = getUserInput();
    std::cout << encrypt(strToEncrypt) << std::endl;
    return 0;
}