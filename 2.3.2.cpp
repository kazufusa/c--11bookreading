char * gets(char * a);
#include <iostream>

using 人数 = int;
template<typename もの> 
もの 足し算( もの 足される, もの 足す){
    return 足される + 足す;
}
int main()
{
    人数 クラスの男子;
    std::cout<< "クラスの男子の人数は?\n";
    std::cin >> クラスの男子;
    人数 クラスの女子;
    std::cout<< "クラスの女子の人数は?\n";
    std::cin >> クラスの女子;
    人数 クラス(足し算(クラスの男子, クラスの女子));
    std::cout<< "クラスの人数は\n";
    std::cout<<クラス<<"\n";
} 
