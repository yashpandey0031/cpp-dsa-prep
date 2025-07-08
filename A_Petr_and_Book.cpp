#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[7];
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    int i = 0;
    while (true) {
        n -= arr[i];
        if (n <= 0) {
            cout << i + 1 << endl; // days are 1-indexed
            break;
        }
        i = (i + 1) % 7; // move to next day, loop around after Sunday
    }

    return 0;
}
