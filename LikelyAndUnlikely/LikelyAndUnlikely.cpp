#include <iostream>
#include <string>
#include <cstdio>

int main(const int argc, const char* argv[])
{
	if (argc > 5) [[like]] {
		puts(argv[5]);
	}
	else [[unlikely]] {
		puts(argv[0]);
	}
	return 0;
}