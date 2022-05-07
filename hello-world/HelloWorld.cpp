/* This is a multi-line comment
Write stuff here
*/

#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello, world";

    // Add these lines to wait for user to press enter
    //  before exiting
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}