#include <iostream>

#define MY_NAME "Vince"
#define PRINT_JOE
#define MY_NUMBER 30

int main()
{
    std::cout << "My name is " << MY_NAME << "\n";
    
    int x { MY_NUMBER };
    std::cout << "My number is " << x << "\n";

    #ifdef PRINT_JOE // PRINT_JOE has been defined previously
    std::cout << "Joe!\n";
    #endif

    #if 0 // Don't compile anything starting here
        std::cout << "Compiled???\n";
        /* Multi-line
            Comment
        */
    #endif

    return 0;
}