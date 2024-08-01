#include <iostream>
#include <string>

const int SHIFT = 3;

std::string getUserInput()
{
    std::string str;
    std::cout << "enter string" << std::endl;
    std::getline(std::cin, str);
    return str;
}

char getAsciiValue(char character)
{
    int ascii = (int) character;
    std::cout << ascii << std::endl;
    return ascii;
}

std::string encrypt(std::string str)
{
    for (int i = 0; i < str.size(); i ++)
    {
        char currentCharacter = str[i];
        if (getAsciiValue(currentCharacter) == 32)
        {
            std::cout << "space found" << std::endl;
        }
    }
}

int main()
{
    std::string name;
    std::string strToEncrypt = getUserInput();
    
    return 0;
}