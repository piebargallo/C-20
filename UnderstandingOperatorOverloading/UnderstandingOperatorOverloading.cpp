struct Complex
{
	constexpr Complex(const double R)
		: r{ R }, i{ 0 } {}

	constexpr Complex(const double R, const double I)
		: r{ R }, i{ I } {}

	Complex operator+(const Complex& rhs)
	{
		return Complex{ r + rhs.r, i + rhs.i };
	}

private:
	double r;
	double i;
};

int main()
{
	Complex c{ 1,2 };
	const auto r = c + 4.5;
	const auto result = c + Complex{ 3,4 };
	return 0;
}