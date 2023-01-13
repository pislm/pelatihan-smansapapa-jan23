#include <iostream>
using namespace std;

// 3
//   * 1  2
//  ** 2  1
// *** 3  0

// 5
//     * 5  4
//    ** 3
//   *** 2
//  **** 1
// ***** 0

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int banyakSpasi = n - i;
        for (int j = 1; j <= banyakSpasi; j++) {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}