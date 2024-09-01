#include <vector>
#include <string>

int main()
{
	std::vector<std::string> vec;

	// call emplace_back when you want to create a new object
	vec.emplace_back(100, 'c');

	// 1. reserve space for a new string
	// 2. placement new() into new space (args...)

	// call push_back when you already have an object
	vec.push_back(std::string(100, 'c'));

	// 1. create a temporary string on the stack(100, 'c')
	// 2. resize the vector
	// std::move(temporaryString) into new memory location

	vec.emplace_back(std::string(100, 'c'));

	// 0. create a temporary string on the stack
	// 1. reserve space for a new string
	// placement new() into new space (args...) (move constructor)

	return vec[0].size();
}