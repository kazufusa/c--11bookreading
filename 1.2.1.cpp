#include <iostream>
void f(int){}

int main()
{
    f(0);
    int arg = 0;
    f(arg);
    std::cout<<arg<<std::endl;
}
