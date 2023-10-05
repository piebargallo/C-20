#include <cstddef>
#include <iostream>
#include <string>
#include <string_view>
#include <format>

std::string_view extractExtension(std::string_view filename)
{
	return filename.substr(filename.rfind('.'));
}

int main()
{
	// C++ std::string.
	std::string filename{ R"(c:\temp\my file.ext)" };
	std::cout << std::format("C++ string: {}", extractExtension(filename)) << std::endl;

	// C-style string.
	const char* cString{ R"(c:\temp\my file.ext)" };
	std::cout << std::format("C string: {}", extractExtension(cString)) << std::endl;
}
