#include <iostream>

const int SHIFT = 3;

std::string getUserInput()
{
    std::string str;
    std::cout << "enter string" << std::endl;
    std::getline(std::cin, str);
    return str;
}

std::string encrypt(std::string)
{
    
}

int main()
{
    std::string name;
    std::string strToEncrypt = getUserInput();
    
    return 0;
}