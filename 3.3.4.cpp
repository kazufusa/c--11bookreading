template <bool I> class X{};

template <typename T>
auto f( T x ) -> decltype(x) ;

template <typename T>
auto f( T x ) -> decltype(x){ return x;}

int main(){
    X< (1 > 2) > x1;
    f(x1);
}
