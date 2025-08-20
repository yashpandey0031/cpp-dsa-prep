#include <bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c) {
    long long a = 0;
    long long b = (long long) sqrt(c);
    while (a <= b) {
        long long sum = a * a + b * b;
        if (sum == c) return true;
        else if (sum < c) a++;
        else b--;
    }
    return false;
}

int main() {
    int c;
    cin >> c;
    cout << (judgeSquareSum(c) ? "true" : "false") << endl;
}

