#include <functional>
#include <utility>

constexpr int get_value(int value)
{
	return value * 3;
}

consteval int get_value_consteval(int value)
{
	return value * 4;
}

template<auto Value>
consteval const auto make_compile_time()
{
	return Value;
}

consteval auto as_constant(auto value)
{
	return value;
}

template<typename ... Param>
consteval decltype(auto) consteval_invoke(Param && ... param)
{
	return std::invoke(std::forward<Param>(param)...);
}

int main()
{
	// not guaranted, is const
	constexpr auto value = get_value(42);

	// has to be const, static
	constexpr static auto value2 = get_value(42);

	// has to be static (not const)
	constinit static auto value3 = get_value(21);

	// must be a compile-time constant
	// but function must be consteval
	auto value4 = get_value_consteval(44);

	// no downsides? weird syntax
	auto value5 = make_compile_time<get_value(45)>();

	// no downsides? another function call
	auto value6 = as_constant(get_value(46));

	// normal invoke syntax
	auto value7 = consteval_invoke(get_value, 47);

	return value + value2 + value3 + value4
		+ value5 + value6 + value7;
}