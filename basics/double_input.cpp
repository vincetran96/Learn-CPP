#include <iostream>

int getIntFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    // Double return statement
    return input;
    return input + 10;
}

int main()
{
    int input{ getIntFromUser() };

    std::cout << "Double of " << input << " is " << input * 2 << "\n";

    // Pipe the function (but not calling it) to the output
    std::cout << "Try not to call the other function " << getIntFromUser << "\n";

    return 0;
}