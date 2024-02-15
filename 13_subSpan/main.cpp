// C++ program to illustrate the initialization of span 
// using vector 
#include <iostream> 
#include <span> 
#include <vector> 

int main()
{
	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	std::span<int> span_vec(vec);

	// Create a subspan form index 1 to 3 
	std::span<int> subspan = span_vec.subspan(1, 3);

	for (const auto& num : subspan) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
