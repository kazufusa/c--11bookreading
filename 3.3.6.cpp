namespace TEST
{
    int x = 1;
}

namespace TEST
{
    int y = x + 1;
    namespace NESTED
    {
        int z = x + y;
    }
}

int f(int n)
{
    {
        return n * n;
    }
}

int main()
{
    return f(TEST::NESTED::z);
}
