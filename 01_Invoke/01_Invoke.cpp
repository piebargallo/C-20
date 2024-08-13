#include <utility>
#include <string>

template<typename Class, typename Ret, typename ... Param,
	typename Obj, typename ... Args>
auto invoke(Ret(Class::* func)(Param...) const noexcept,
	Obj&& obj, Args && ... args)
{
	return (std::forward<Obj>(obj.*func)(std::forward<Args>(args)...);
}

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
	auto func = bind_front(&std::string::size, s);
	return func();
}