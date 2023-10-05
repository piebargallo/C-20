#include <string>
#include <iostream>
#include <compare>

int main()
{
	
	{
		// C++20 three-way comparison operator
		std::string a{ "12" };
		std::string b{ "34" };
		auto result{ a <=> b };
		if (is_lt(result)) { std::cout << "less" << std::endl; }
		if (is_gt(result)) { std::cout << "greater" << std::endl; }
		if (is_eq(result)) { std::cout << "equal" << std::endl; }
	}

	return 0;
}
