template<typename T> concept has_call_operator = requires {
	&T::operator();
};

template<typename FunctionObject>
auto use_function_object(FunctionObject obj)
	requires has_call_operator<FunctionObject>
{
	return obj();
}

int func();

int main()
{
	use_function_object([]() {});
	return 0;
}