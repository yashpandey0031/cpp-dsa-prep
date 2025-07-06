#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // number of friends

    int sum = 0, x;

    // sum of fingers shown by friends
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
    }

    int ways = 0; // number of ways Dima can be safe

    for (int i = 1; i <= 5; ++i) { // Dima can show 1 to 5 fingers
        // Total people: Dima + n friends = n + 1 people
        // If (sum + i) % (n + 1) == 1 → Dima will clean → Unsafe
        if ((sum + i) % (n + 1) != 1) {
            ways++; // safe option
        }
    }

    cout << ways << endl;

    return 0;
}
