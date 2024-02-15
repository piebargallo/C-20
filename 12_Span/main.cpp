// C++ program to illustrate the use of std::span 
#include <iostream> 
#include <span> 
#include <vector>

int main()
{
	std::vector<int> vec{ 1, 2, 3, 4, 5 };

	// Create a span of int of vector 
	std::span<int> span_vec(vec);

	for (const auto& num : span_vec) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	return 0;
}
