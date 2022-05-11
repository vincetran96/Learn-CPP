#include <iostream>


// Ask for 2 numbers
// Then show the sum and subtraction
int main ()
{
    std::cout << "Enter an integer: ";
    int num_0 { };
    std::cin >> num_0;

    std::cout << "Enter another integer: ";
    int num_1 { };
    std::cin >> num_1;
    
    std::cout << num_0 << " + " << num_1 << " is " << num_0 + num_1 << "\n";
    std::cout << num_0 << " - " << num_1 << " is " << num_0 - num_1 << "\n";

    return 0;
}