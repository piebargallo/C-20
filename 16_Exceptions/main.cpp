#include <iostream>
#include <stdexcept>
#include <format>

double divideNumbers(double numerator, double denominator)
{
	if (denominator == 0) {
		throw std::invalid_argument{ "Denominator cannot be 0." };
	}
	return numerator / denominator;
}

int main()
{
	try {
		std::cout << divideNumbers(2.5, 0.5) << std::endl;
		std::cout << divideNumbers(2.3, 0) << std::endl;
		std::cout << divideNumbers(4.5, 2.5) << std::endl;
	}
	catch (const std::invalid_argument& exception) {
		std::cout << std::format("Exception caught: {}", exception.what()) << std::endl;
	}

	return 0;
}
