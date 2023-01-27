#include <iostream>
using namespace std;

int faktorial(int x) {
    if (x == 1) {
        return 1;
    }
    return x * faktorial(x - 1);
}

int fibo(int x) {
    if (x == 1 || x == 2) {
        return 1;
    }
    return fibo(x - 1) + fibo(x - 2);
}

int f(int x) {
    if (x <= 1) return 0;
    if (x % 2 == 0) return x + f(x / 2);
    return f(x + 1);
}

// f(11) = f(12) = 24
// f(12) = 12 + f(6) = 12 + 12 = 24
// f(6) = 6 + f(3) = 6 + 6 = 12
// f(3) = f(4) = 6
// f(4) = 4 + f(2) = 4 + 2 = 6
// f(2) = 2 + f(1) = 2 + 0 = 2
// f(1) = 0

int jabatan(int a, int b) {
    if (b == 0) {
        return 1;
    } else if (b % 2 == 1) {
        return a * jabatan(a, b - 1);
    } else {
        int temp = jabatan(a, b / 2);
        return temp * temp;
    }
}

// jabatan(2,5) = 2 * jabatan(2, 4) = 32
// jabatan(2,4) = jabatan(2,2) * jabatan(2,2) = 16
// jabatan(2,2) = jabatan(2,1) * jabatan(2,1) = 4
// jabatan(2,1) = 2 * jabatan(2,0) = 2
// jabatan(2,0) = 1

int ping(int a) {
    if (a == 0) {
        return 0;
    } else {
        return 1 + pong(a - 1);
    }
}

int pong(int a) {
    if (a == 0) {
        return 0;
    } else {
        return 2 + ping(a - 1);
    }
}

// ping(5) = 1 + pong(4) = 7
// pong(4) = 2 + ping(3)
// ping(3) = 1 + pong(2)
// pong(2) = 2 + ping(1)
// ping(1) = 1 + pong(0)
// pong(0) = 0

int main() {
    cout << fibo(40) << endl;
}