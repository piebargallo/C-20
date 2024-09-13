// 1. Designated initializers
struct S {
	int i;
	int j;
	float f;
};

void designated_initializers() {
	// awesome, but unenforceable
	S s{ .i = 2, .j = 42, .f = 3.14 };
}

// 2. 3-way comparison, aka, spaceship
#include <compare>
struct S2 {
	int i;
	int j;
	float f;
	constexpr auto operator<=>(const S2&) const = default;
};

bool compare(S2 lhs, S2 rhs)
{
	return lhs < rhs;
}

// 3. Modules
// cannot give succinct example
// help us modularize our code

// 4. coroutines
// no stdlib support, but look into cppcoro

// 5. concepts/auto concept
auto add(std::integral auto lhs, std::integral auto rhs)
{
	return lhs + rhs;
}

auto use_add() {
	return add(3, 411);
}

auto do_work(auto first, auto second) {
	return first < second;
}

// 6. <format>
#include <string>
#include <format>

std::string make_log(int id, std::string_view description)
{
	return std::format("Even {}: {}", id, description);
}

// 7. <source_location>
#include <source_location>

void do_log() {
	make_log(42, std::source_location::current().function_name());
}

// 8. Calendar updates to <chrono>

// 9. <ranges>

#include <vector>
#include <ranges>

void use_ranges(const std::vector<int>& vec) {
	for (const auto& val : vec | std::ranges::views::drop(2))
	{
		// do things
	}
}

// 10. More constexpr
// std::vector, std::string, <algorithm> consteval, constinit
// virtually any code can work at compile time

// 11. <span>
#include <span>
void use_ranges(const std::span<int>& vec) {
	for (const auto& val : vec | std::ranges::views::drop(2))
	{
		// do things
	}
}
