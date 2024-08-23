#include <cmath>
#include <iostream>
#include <iomanip>

int main()
{
	const float f = .0012023022246f;
	const auto n = std::nextafter(f, std::numeric_limits<decltype(f)>::infinity());

	std::cout << "       " << std::setprecision(30) << f << "\n next: " << n << '\n';
	return 0;
}