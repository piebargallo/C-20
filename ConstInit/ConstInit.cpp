#include <mutex>

constexpr int get_value()
{
	return 42;
}

int& use_value()
{
	constinit static std::mutex my_mutex;

	std::scoped_lock l(my_mutex);
	constinit static auto value = 4;
	++value;
	return value;
}

int main()
{
	constinit static auto i = get_value();
}