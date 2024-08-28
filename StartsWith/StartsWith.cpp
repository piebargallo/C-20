#include <string_view>

int main()
{
	constexpr std::string_view str = "Hello World";
	constexpr bool starts_with_hello = str.starts_with("Hello");

	return starts_with_hello;
}