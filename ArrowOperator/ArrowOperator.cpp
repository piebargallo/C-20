#include <string>

struct Pointer
{
	std::string* p;

	constexpr auto* operator->()
	{
		return p;
	}

	constexpr auto* operator->() const
	{
		return p;
	}
};

int main()
{
	std::string s{ "Hello World" };
	Pointer dumb_pointer{ &s };
	return (dumb_pointer.operator->())->size();
	return 0;
}