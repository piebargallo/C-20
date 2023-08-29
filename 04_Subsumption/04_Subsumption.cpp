#include <iostream>
#include <concepts>

template <typename T> requires std::integral<T>
void process(const T& t) { std::cout << "integral<T>" << std::endl; }

template <typename T> requires (std::integral<T> && sizeof(T) == 4)
void process(const T& t) { std::cout << "integral<T> && sizeof(T) == 4" << std::endl; }

int main()
{
	process(int{ 1 });
	process(short{ 2 });
}