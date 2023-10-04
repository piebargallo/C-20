#include <cstddef>
#include <iostream>
#include <array>

class Rect
{
public:
	constexpr Rect(size_t width, size_t height)
		: m_width{ width }, m_height{ height }
	{
	}

	constexpr size_t getArea() const
	{
		return m_width * m_height;
	}

private:
	size_t m_width{ 0 }, m_height{ 0 };
};

int main()
{
	constexpr Rect r{ 4, 4 };
	int myArray[r.getArea()];
	std::cout << std::size(myArray) << std::endl;

	return 0;
}