#include <iostream>
#include <format>

void myFunction(int i, char c)
{
	std::cout << std::format("the value of i is {}", i) << std::endl;
	std::cout << std::format("the value of c is {}", c) << std::endl;
}

auto addNumbers(int number1, int number2)
{
	std::cout << std::format("Entering function {}", __func__) << std::endl;
	return number1 + number2;
}

auto addNumbers(double a, double b)
{
	std::cout << std::format("Doubling function {}", __func__) << std::endl;
	return a + b;
}

int main()
{
	int someInt{ 6 };
	char someChar{ 'c' };
	myFunction(8, 'a');
	myFunction(someInt, 'b');
	myFunction(5, someChar);

	std::cout << addNumbers(1, 2) << std::endl; // Calls the integer version
	std::cout << addNumbers(1.11, 2.22);   // Calls the double version

	return 0;
}
