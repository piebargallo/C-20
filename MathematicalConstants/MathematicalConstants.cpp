#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

int main()
{
	std::cout << std::setprecision(30) << std::numbers::pi_v<float> << '\n';
	return 0;
}