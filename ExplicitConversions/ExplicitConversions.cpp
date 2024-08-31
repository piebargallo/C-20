#include <utility>

template <typename Contained>
struct S
{
	S() = default;
	explicit(!std::is_trivial_v<Contained>)
		S(Contained&& c_) : contained(std::move(c_)) {}
	explicit(!std::is_trivial_v<Contained>)
		S(const Contained& c_) : contained(c_) {}

	const Contained& get() const {
		return contained;
	}

	explicit(!std::is_trivial_v<Contained>)
		operator Contained() const {
		return contained;
	}
private:
	Contained contained;
};

void func(const S<int>&);

int main()
{
	func(1);
	return 0;
}