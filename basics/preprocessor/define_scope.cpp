#include <iostream>

void goo()
{
    #define MY_NAME "John"
}

int main()
{
    std::cout << "My name: " << MY_NAME << "\n";
    
    return 0;
}
