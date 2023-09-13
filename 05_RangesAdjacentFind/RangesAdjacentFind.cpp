#include <vector> // std::vector
#include <iostream>
#include <algorithm> // adjacent_find()

int main() {
	std::vector<int> v {5, 2, 8, 2, 2, 3, 3};
	auto i = std::ranges::adjacent_find(v);
	if (i != end(v)) {   // true => found
		auto const value = *i;  // int value = 2
		auto const index = distance(begin(v), i);  // index = 3
		std::cout << "value: " << value << '\n';
		std::cout << "index: " << index << '\n';
	}
}