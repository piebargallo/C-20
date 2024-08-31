#include <vector>
#include <numeric>

//constexpr int use_vector(bool use_vector)
constexpr int use_vector()
{
	/* if (use_vector) {
		std::vector<int> vec;
	}
	return 4; */
	std::vector<int> vec{ 1,2,3,4 };
	if (vec[2] == 3) {
		vec.push_back(16);
	}
	return std::accumulate(begin(vec), end(vec), 0);
}

int main()
{
	//constexpr auto value = use_vector(false);
	constexpr auto value = use_vector();
	return value;
}