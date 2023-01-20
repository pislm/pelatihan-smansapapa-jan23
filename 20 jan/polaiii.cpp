#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int berhitung = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << berhitung;
            berhitung++;
            if (berhitung == 10) berhitung = 0;
        }
        cout << endl;
    }
}