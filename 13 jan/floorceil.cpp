#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int bulat = int(n);

    if (n == bulat) {
        cout << n << ' ' << n << endl;

    } else {
        if (n > 0) {
            int floor = bulat;
            int ceil = bulat + 1;
            cout << floor << ' ' << ceil << endl;
        } else {
            int floor = bulat - 1;
            int ceil = bulat;

            cout << floor << ' ' << ceil << endl;
        }
    }
}