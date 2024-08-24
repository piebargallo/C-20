#include <utility>
#include <type_traits>

template<typename Type>
struct Optional_nontrivial {
	~Optional_nontrivial() {
		static_cast<Type*>(this)->data.~Contained();
	}
};

struct Optional_trivial {

};

template<typename Contained>
struct Optional : std::conditional_t<std::is_trivially_destructible_v<Contained>,
	Optional_trivial,
	Optional_nontrivial<Optional<Contained>>>

{
	union { Contained data; };
	bool initialized = false;

	constexpr Optional& operator=(Contained&& data) {
		this->data = std::move(data);
		initialized = true;
		return *this;
	}

	/*
	~Optional()
	{
		if (initialized) {
			data.~Contained();
		}
	}
	*/

};

int main()
{
	Optional<int> obj;
	obj = 4;
	static_assert(std::is_trivially_destructible_v<Optional<int>>);
	static_assert(std::is_trivially_destructible_v<Optional<std::strong_ordering>>);
}