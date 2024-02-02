#include <iostream>

#include "functions.hpp"

// Case for two options is not currently working

int main()
{
    std::string name;
    std::cout << "First name: ";
    std::cin >> name;

    std::string interests;
    std::cout << "The interests and their corresponding numbers are as follows:" << std::endl;
    std::cout << "1. Am new and want to learn more about what you offer" << std::endl;
    std::cout << "2. Am interested in hearing more about having a relationship with God" << std::endl;
    std::cout << "3. Want to get plugged into a small group / Bible study" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the numbers that correspond to " << name << ": ";
    std::cin >> interests;

    GenerateText(name, interests);
}