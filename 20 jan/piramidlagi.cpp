#include <iostream>
using namespace std;

int main() {
    // i, n = 4
    // 1     *     3   1
    // 2    ***    2   3
    // 3   *****   1   5
    // 4  *******  0   7

    // bintang(n) = 1 + (2 * (i-1))
    // spasi(n) = n - i
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < n - i; k++) {
            cout << " ";
        }

        for (int j = 1; j <= 1 + (2 * (i - 1)); j++) {
            cout << "*";
        }
        cout << endl;
    }
}