#include <concepts> // For std::integral
#include <iostream>

void print(std::integral auto i) {
    std::cout << "Integral: " << i << '\n';
}

int main()
{
   print(007); static_assert(std::integral<int>);
   return 0;
}

