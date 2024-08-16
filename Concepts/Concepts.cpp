#include <type_traits>
#include <iostream>
using namespace std;

template<typename T>
concept floating_point = std::is_floating_point_v<T>;

template<floating_point Double>
auto go(const floating_point auto value1, const floating_point auto value2)
{
    return value1 + value2;
}

int main()
{
    double x = 3.14;
    double y = 2.71;

    // Call the go function
    double result = go<double>(x, y);

    std::cout << "Result: " << result << std::endl;
    return 0;
}
