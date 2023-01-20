#include <iostream>
using namespace std;

int main() {
    cout << "Ketik huruf k";
    bool sudahBenar = false;

    if (sudahBenar) {
        /* code */
    }

    while (!sudahBenar) {
        cout << "masukkan huruf";
        char huruf;
        cin >> huruf;
        if (huruf == 'k') {
            sudahBenar = true;
        } else {
            cout << "Salah, silahkan coba lagi";
        }
    }

    // bool x = true;

    // if (x) {
    //     /* code */
    // } else {

    // }

    // for (size_t i = 0; i < count; i++) {
    //     /* code */
    // }

    // while (x <= 5) {
    //     /* code */
    // }
}