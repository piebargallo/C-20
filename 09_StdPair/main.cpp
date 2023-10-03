#include <utility>
#include <iostream>
#include <format>

int main()
{
	std::pair myPair { 1.23, 5 };  // Using CTAD
	std::cout << std::format("{} {}", myPair.first, myPair.second);

	return 0;
}