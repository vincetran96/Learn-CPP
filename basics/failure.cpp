#include <iostream>

int add(int x, int y, int z);

int main()
{
    std::cout << add(3, 4, 5) << "\n";
    
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}