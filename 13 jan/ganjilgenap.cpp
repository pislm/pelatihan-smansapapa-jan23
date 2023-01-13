#include <iostream>
using namespace std;

// 1 ganjil positif
// -2 genap negatif

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        // positif
        if (n % 2 == 0) {
            cout << "genap positif" << endl;
        } else {
            cout << "ganjil positif" << endl;
        }
    } else if (n < 0) {
        // negatif
        if (n % 2 == 0) {
            cout << "genap negatif" << endl;
        } else {
            cout << "ganjil negatif" << endl;
        }
    } else {
        cout << "nol" << endl;
    }
}