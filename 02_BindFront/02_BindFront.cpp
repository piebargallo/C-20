#include <utility>
#include <iostream>

template<typename F, typename ... Param>
auto bind_front(F&& f, Param && ... param)
{
	return [f = std::forward<F>(f),
		...bound_param = std::forward<Param>(param)]
		(auto && ... param) -> decltype(auto)
	{
		return f(bound_param...,
			std::forward<decltype(param)>(param)...);
	};

}

int add(int i, int j, int k)
{
	return i + j + k;
}

int main(int argc, const char* [])
{
	auto func = bind_front(&add, 3, 2);
	std::cout << func(argc) << std::endl;
	return 0;
}

// Output 6