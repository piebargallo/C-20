consteval int get_value(int input)
{
	return input * 2;
}

int main(int argc, const char* [])
{
	const int val = get_value(4);
	return val;
}