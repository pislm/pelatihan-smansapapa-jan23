#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int terbesar = -10000000;
    int terkecil = 10000000;

    while (n--) {
        int angkaSekarang;
        cin >> angkaSekarang;
        if (angkaSekarang > terbesar) {
            terbesar = angkaSekarang;
        }
        if (angkaSekarang < terkecil) {
            terkecil = angkaSekarang;
        }
    }
    cout << terbesar << " " << terkecil;

    // 1 -1 1 10 10 6 8 4
    // terbesar = 10
    // terkecil = -1
}