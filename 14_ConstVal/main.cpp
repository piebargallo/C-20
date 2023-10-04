#include <iostream>

consteval double inchToMm(double inch) { return inch * 25.4; }

int main()
{
	constexpr double const_inch{ 6.0 };
	constexpr double mm1{ inchToMm(const_inch) };  // at compile time
	std::cout << mm1 << std::endl;

	return 0;
}