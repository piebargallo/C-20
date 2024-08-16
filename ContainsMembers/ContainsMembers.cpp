#include <set>

bool has_my_data(const std::multiset<int>& s)
{
	//return s.find(4) != s.end();
	return s.contains(4);
}