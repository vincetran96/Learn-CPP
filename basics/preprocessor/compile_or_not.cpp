# include <iostream> // for using std::cout

void foo()
{
    std::cout << " My name is : " << MY_NAME << '\n';
}

int main()
{
# define MY_NAME "Alex"
        foo();
        return 0;
}
