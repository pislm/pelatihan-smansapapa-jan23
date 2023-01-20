#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // int a = n;
    // while (a > 0) {
    //     if (n % a == 0) {
    //         cout << a << endl;
    //     }
    //     a--;
    // }
    for (int a = n; a > 0; a--) {
        if (n % a == 0) {
            cout << a << endl;
        }
    }
}