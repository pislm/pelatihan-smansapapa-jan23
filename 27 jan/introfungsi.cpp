#include <iostream>
using namespace std;

int luasPersegiPanjang(int x, int y) {
    cout << "Menghitung luas persegi panjang dengan panjang " << x << " dan lebar " << y << endl;
    return x * y;
}

bool isGenap(int angka) {
    return angka % 2 == 0;
}

string sapa(string nama, int umur) {
    return "Halo " + nama + ", Umurmu " + to_string(umur);
}

int foo() {
    cout << "hai" << endl;
    return 999;
}

void halo(string nama) {
    cout << "Halo " << nama << endl;
}

int main() {
}