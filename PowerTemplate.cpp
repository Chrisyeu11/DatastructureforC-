#include <iostream>
using namespace std;
#include <iostream>

template <typename T>
T power(T base, T exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent-1);
}

int main() {
    std::cout << "Result: " << power(2, 3);
    return 0;
}
