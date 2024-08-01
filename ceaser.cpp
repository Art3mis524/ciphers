#include <iostream>
#include <string>

const int SHIFT = 3;
const int MAX = 126; //end of ascii table
const int MIN = 36; //3 above ascii character table start
cosnt int asciiSpaceValue = ?;

std::string getUserInput()
{
    std::string str;
    std::cout << "enter string" << std::endl;
    std::getline(std::cin, str); //get user input
    return str;
}

char getAsciiValue(char character)
{
    int ascii = character;
    return ascii; //convert character into ascii value
}

std::string encrypt(std::string str)
{
    std::string encryptedString;

    for (int i = 0; i < sizeOfString; i ++) //size of string needs to be declared and initialised
    {
        char character;
        int asciiValue = getAsciiValue(str[i]);
        if (asciiValue != asciiSpaceValue && asciiValue > MIN) //shift everything expect for space
        {
            asciiValue = asciiValue - SHIFT;
            character = asciiValue;
            encryptedString.insert(i, 1, character);
        }
        
        else if (asciiValue != asciiSpaceValue && asciiValue < MIN) //shift characters back to top if out of range
        {
            asciiValue = asciiValue + ?; //number needed to wrap around back to top of ascii characters
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