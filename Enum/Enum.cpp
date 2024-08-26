#include <string>

enum struct Values
{
	value1 = 1,
	value2 = 2
};

std::string to_string(const Values v)
{
	using enum Values;

	switch (v) {
	case Values::value1:
		return "value1";
	case Values::value2:
		return "value2";
	}

	return "unknow value";
}

namespace NS
{
	using enum Values;
}

struct S
{
	using enum Values;
};

int main()
{
	auto val = NS::value1;
	return 0;
}