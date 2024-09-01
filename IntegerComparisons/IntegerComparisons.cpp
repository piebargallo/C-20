#include <utility>

int get_value1() { return -1; }
unsigned int get_value2() { return 1; }

int main()
{
	return std::cmp_less(get_value1(), get_value2());
	return 0;
}