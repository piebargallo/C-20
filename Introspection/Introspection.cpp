#include <vector>
#include <cassert>

// A function that returns the amount of space allocated in a container

auto Allocated_size(const auto& container) {
	if constexpr (requires { container.capacity(); }) {
		return container.capacity();
	}
	else {
		return container.size();
	}
}

int main()
{
	std::vector<int> vec;
	assert(Allocated_size(vec) == 0);

	vec.push_back(1);
	assert(Allocated_size(vec) == 1);
}