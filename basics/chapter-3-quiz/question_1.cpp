#include <iostream>

int readNumber()
{
    int x { };
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << "\n";
}

int main()
{
    int x { readNumber() };
    x = x + readNumber();
    writeAnswer(x);

    return 0;
}
