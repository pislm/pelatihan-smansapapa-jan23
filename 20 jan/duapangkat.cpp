#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // ide 1
    // while (n % 2 == 0) {
    //     n /= 2;
    // }
    // if (n == 1) {
    //     cout << "ya" << endl;
    // } else {
    //     cout << "tidak" << endl;
    // }

    // ide 2
    int duaPangkatSekarang = 1;
    while (duaPangkatSekarang < n) {
        duaPangkatSekarang *= 2;
    }
    if (duaPangkatSekarang == n) {
        cout << "Ya" << endl;
    } else {
        cout << "Tidak" << endl;
    }
}