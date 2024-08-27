#include <array>
#include <cstdint>
#include <source_location>

int main()
{
	auto s = std::source_location::current();
	return 0;
}