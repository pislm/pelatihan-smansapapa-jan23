#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int totalBebek = 0;
    for (int i = 1; i <= n; i++) {
        int banyakBebek;
        cin >> banyakBebek;
        totalBebek += banyakBebek;
    }
    cout << totalBebek << endl;
}