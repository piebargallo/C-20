#include <iostream>
#include <array>
#include <format>

int main()
{
	std::array arr{ 9, 8, 7 };  // Using CTAD, class template argumend deduction
	std::cout << std::format("Array size = {}", arr.size()) << std::endl;
	std::cout << std::format("2nd element = {}", arr[1]) << std::endl;

	return 0;
}
