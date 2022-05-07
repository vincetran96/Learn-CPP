#include <iostream>

int main()
{
    // std::cout
    int x { 5 };
    std::cout << "Hello" << std::endl; // endl will move cursor to next line
    std::cout << "x is equal to " << x << "\n";
    
    // std::cin
    std::cout << "Enter a number: "; // Ask user for number
    int y { }; // Value/Zero initialization
    std::cin >> y; // Get number from keyboard and store it in y
    std::cout << "You entered " << y << "\n";

    std::cout << "Enter two numbers separated by space: ";
    int z { };
    int c { };
    std::cin >> z >> c;
    std::cout << "You entered " << z << " and " << c;

    return 0;
}