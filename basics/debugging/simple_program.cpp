#include <iostream>

void printValue(int value)
{
    std::cout << value << "\n";
}

int main()
{
    int x { 1 };
    printValue(x);
    return 0;
}
