#include <iostream>
using namespace std;

long long power(int base, int exp);
int integerBreak(int n);

int main() {
    int n;
    cin >> n;
    cout << integerBreak(n) << endl;
    return 0;
}

long long power(int base, int exp) {
    long long result = 1;
    int i = 0;
    while (i < exp) {
        result = result * base;
        i++;
    }
    return result;
}

int integerBreak(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;

    int threes = n / 3;
    int rest = n % 3;

    switch (rest) {
        case 0:
            return (int)power(3, threes);
        case 1:
            return (int)(power(3, threes - 1) * 4);
        default:
            return (int)(power(3, threes) * 2);
    }
}