char * gets(char * a);
#include <iostream>

template<typename T> 
constexpr T abs(T x)
{
    if (x < 0) // OK
        return x;
    return x;
}

template<typename T> 
constexpr T 足し算( T a, T b) {return a + b;}

int main(){
    auto b = [](int x, int y) { return x + y; };
    int a = abs(足し算(1, 2));
    std::cout<<a<<std::endl;
    return a == b(1, 2);
}
