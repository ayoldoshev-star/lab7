#include <iostream>
using namespace std;

int toMinutes(int h, int m) {
    return h * 60 + m;
}

int convertTime(int current, int correct) {
    int diff = correct - current;
    int ops = 0;

    ops += diff / 60;
    diff %= 60;

    ops += diff / 15;
    diff %= 15;

    ops += diff / 5;
    diff %= 5;

    ops += diff;

    return ops;
}

int main() {
    int h1, m1, h2, m2;
    char colon;

    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

    int current = toMinutes(h1, m1);
    int correct = toMinutes(h2, m2);

    cout << convertTime(current, correct) << endl;
    return 0;
}