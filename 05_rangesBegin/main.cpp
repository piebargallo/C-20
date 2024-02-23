#include <cassert>
#include <ranges>
#include <vector>

int main()
{
    std::vector v{3, 1, 4};
    auto vi = std::ranges::begin(v);
    auto vci = std::ranges::cbegin(v);
    assert(*vi == 3 and *vi == *vci);
    ++vi;
    ++vci; // OK: vci is modifiable object
    *vi = 42; // OK: vi points to mutable element
    // *vci = 13; // Error: vci points to immutable element

    int a[]{ -5, 10, 15 };
    auto ai = std::ranges::begin(a); // works with C-arrays as well
    assert(*ai == -5);
    *ai = 42; // OK
}