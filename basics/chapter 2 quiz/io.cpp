#include "io.h"
#include <iostream>


int readNumber()
{
    std::cout << "Enter integer: ";
    int input { };
    std::cin >> input;
    return input;
}

void writeAnswer(int number)
{
    std::cout << "The number entered is: " << number << "\n";
}
