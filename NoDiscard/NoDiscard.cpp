#include <vector>

struct Vector {
	// return true if empty
	[[nodiscard("You probably meant to call clear()")]]
	constexpr bool empty() const noexcept;

	void clear();
};

struct [[nodiscard("This is an error type!!")]] Error
{
};

Error do_thing();

int main()
{
	Vector vec;
	vec.empty();
	vec.clear();

	do_thing();
	return 0;
}

constexpr bool Vector::empty() const noexcept
{
	return false;
}

void Vector::clear()
{
}

Error do_thing()
{
	return Error();
}
