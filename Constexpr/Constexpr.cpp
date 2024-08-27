#include <array>

struct Vector {
	unsigned int x;
	unsigned int y;
	unsigned int z;
};

// CNTTP
// Class Non-Type Template Parameter

template<auto x>
int use_x() {
	return x;
}

constexpr auto use_vector(const Vector& vec) {
	std::array<int, 3> data{};
	return data;
}

int main()
{
	constexpr Vector values{ 1,2,3 };
	use_vector(values);
	return 0;
}