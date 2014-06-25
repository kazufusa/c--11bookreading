char * gets(char * a);
#include <iostream>
using type = int;
class C
{
    public:
    C(){
        x = 1;
    }
    type x;
    using type = float;
};

int main()
{
    C c = C();
    std::cout<<c.x<<std::endl;
}
