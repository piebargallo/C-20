// constexpr - probably doesn´t do what
// you think it does

#include <array>

constexpr int get_value(int value)
{
	return value * 2;
}

constexpr std::array<int, 1000> get_values() {
	std::array<int, 1000> retval{};
	int count = 0;
	for (auto& val : retval) {
		val = count * 3;
		++count;
	}
	return retval;
}

int main()
{
	/* constexpr int value = get_value(6); // maybe? up to the optimizer
	// is value calculated at compile time?

	// forces compile time calculation
	static_assert(value == 12);
	return value; */
	const int* p = nullptr;
	{
		// you almost always mean static constexpr instead!!
		static constexpr auto values = get_values();
		// constexpr values are stack values!
		// it was not required to do this!
		//return values[879];
		p = &values[985];
	}
}