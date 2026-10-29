#include <iostream>
using namespace std;

int tribonacci(int n);

int main() {
    int n;
    cin >> n;
    cout << tribonacci(n) << endl;
    return 0;
}

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int a = 0, b = 1, c = 1;
    int i = 3;
    while (i <= n) {
        int next = a + b + c;
        a = b;
        b = c;
        c = next;
        i++;
    }
    return c;
}