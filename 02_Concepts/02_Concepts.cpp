#include <concepts>
#include <iostream>

template<typename T>
concept Num = std::integral<T> || std::floating_point<T>;

template<Num T1, Num T2>
auto mult(T1 primero, T2 segundo)
{
	return primero * segundo;
}

int main()
{
	std::cout << mult(4, 4) << std::endl;
	std::cout << mult(2, 2.2) << std::endl;
	return 0;
}