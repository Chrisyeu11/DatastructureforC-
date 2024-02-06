#include <iostream>
using namespace std;

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m, m1, m2, n, n1, n2;
    cout << "Enter the values of m and n: ";
    cin >> m >> n >> m1 >> n1 >> m2 >> n2;
    cout << "A(" << m << "," << n << ") = " << ackermann(m, n) << endl;
    cout << "A(" << m1 << "," << n1 << ") = " << ackermann(m1, n1) << endl;
    cout << "A(" << m2 << "," << n2 << ") = " << ackermann(m2, n2) << endl;

  
    return 0;
}