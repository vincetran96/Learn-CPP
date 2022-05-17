#include <iostream>

int getIntFromUser()
{
    std::cout << "Enter int: ";
    int input { };
    std::cin >> input;

    return input;
}

void printDouble(int value)
{
    std::cout << "Double of " << value << " is " << value * 2 << "\n";
}

int main()
{
    printDouble(getIntFromUser());

    return 0;
}
