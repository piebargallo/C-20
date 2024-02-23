#include <concepts>
#include <iostream>

void print(std::integral auto i)
{
    std::cout << "Integral: " << i << '\n';
}

void print(auto x)
{
    std::cout << "Non-integral: " << x << '\n';
}

int main()
{
    std::cout << std::boolalpha;

    static_assert(std::integral<bool>);
    print(true);

    static_assert(std::integral<char>);
    print('o');

    static_assert(std::integral<int>);
    print(007);

    static_assert(!std::integral<double>);
    print(2e2);

    static_assert(!std::integral<decltype("")>);
    print("+++");
}