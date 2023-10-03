#include <vector>
#include <iostream>
#include <format>

int main()
{
	// Create a vector of integers
	std::vector myVector { 11, 22 };  // Using CTAD

	// Add some more integers to the vector using push_back()
	myVector.push_back(33);
	myVector.push_back(44);

	// Access elements
	std::cout << std::format("four element: {}", myVector[3]) << std::endl;

	return 0;
}
