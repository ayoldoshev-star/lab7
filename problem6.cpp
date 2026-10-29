#include <iostream>
using namespace std;

int minOperations(int n);

int main() {
    int n;
    cin >> n;
    cout << minOperations(n) << endl;
    return 0;
}

int minOperations(int n) {
    int ops = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            n /= 2;
        } else if (n % 4 == 3) {
            n += 1;
            ops++;
        } else {
            n -= 1;
            ops++;
        }
    }
    return ops;
}