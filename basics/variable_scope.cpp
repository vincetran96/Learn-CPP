#include <iostream>

void something(int a);

void doIt(int x)
{
    int y { 4 };
    int z;
    std::cout << "doIt: x = " << x << " y = " << y << "\n";

    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << "\n";
    std::cout << "z is " << z << "\n";
}

void something(int a); // Re-declare

int main()
{
    int x { 1 };
    int y { 2 };

    std::cout << "main: x = " << x << " y = " << y << "\n";

    doIt(x);

    std::cout << "main: x = " << x << " y = " << y << "\n";

    return 0;
}