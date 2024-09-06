#include <algorithm>
#include <vector>
#include <ranges>

std::vector<int> get_data()
{
	return std::vector<int>{2, 3, 4, 5, 6, 8};
}

bool test_data() {
	auto data = get_data();
	auto result = std::ranges::all_of(data.begin(), data.end(),
		[](const int i) { return i < 5; });

	return result;
}

int main()
{
	return test_data();
}