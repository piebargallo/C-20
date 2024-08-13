#include <utility>
#include <string>
#include <functional>

template<typename F, typename ... Param>
auto bind_front(F&& F, Param && ... param)
{
	return [f = std::forward<F>(f),
		...bound_param = std::forward<Param>(param)]
		(auto && ... param) -> decltype(auto)
	{
		return std::invoke(f, bound_param...,
			std::forward<decltype(param)>(param)...);
	};
}

int main(int argc, const char* [])
{
	std::string s;
	auto func = std::bind_front(&std::string::size, s);
	return func();
}