#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int totalBebek = 0;
    int i = 1;
    while (n--) {
        int bebekSekarang;
        cin >> bebekSekarang;
        totalBebek += bebekSekarang;
        i++;
    }

    cout << totalBebek << endl;
}