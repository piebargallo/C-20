// NOTE: Most compilers will issue a warning or an error
// when code is using uninitialized variables. Some compilers
// will generate code that will report an error at run time.

#include <iostream>
#include <format>

int main()
{
	int uninitializedInt;
	int initializedInt{ 7 };

	std::cout << std::format("{} is a random value", uninitializedInt) << std::endl;
	std::cout << std::format("{} was assigned an initial value", initializedInt) << std::endl;

	return 0;
}
