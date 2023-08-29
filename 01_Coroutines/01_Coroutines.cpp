// C++ program to demonstrate how coroutines
// can be implemented in C++.
#include <iostream>

int range(int a, int b)
{
	static long long int i;
	static int state = 0;
	switch (state) {
	case 0: /* start of function */
		state = 1;
		for (i = a; i < b; i++) {
			return i;

			/* Returns control */
	case 1:
		std::cout << "control at range"
			<< std::endl; /* resume control straight
					after the return */
		}
	}
	state = 0;
	return 0;
}

// Driver code
int main()
{
	int i; // For really large numbers

	for (; i = range(1, 5);)
		std::cout << "control at main :" << i << std::endl;

	return 0;
}
