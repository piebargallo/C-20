#include <algorithm>
#include <array>

constexpr auto sort(auto data)
{
	std::sort(begin(data), end(data));
	return data;
}

int main()
{
	constexpr auto sorted_data =
		sort(std::array{ 34, 21, 13, 1, 9 });
	static_assert(std::is_sorted
	(begin(sorted_data), end(sorted_data)));
	return sorted_data[0];
}