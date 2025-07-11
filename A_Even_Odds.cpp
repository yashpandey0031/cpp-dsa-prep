//failed at testcase lol
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int mid = ceil(n / 2.0);  

    if (k > mid) {
        // even case
        cout << (2 * (k - mid));
    } else {
        // odd case (also includes k == mid)
        cout << ((2 * k) - 1);
    }

    return 0;
}
