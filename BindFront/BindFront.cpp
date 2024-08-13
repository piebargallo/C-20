#include <functional>
#include <iostream>

int add(int i, int j, int k)
{
	return i + j + k;
}

int main(int argc, const char* [])
{
	auto func = std::bind_front(&add, 3, 2);
	std::cout << func(argc) << std::endl;
	return 0;
}

// Output 6