#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k;
    cin >> k; // growth needed

    vector<int> a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }

    // Sort in descending order to maximize growth per month
    sort(a.begin(), a.end(), greater<int>());

    int month_count = 0;

    for (int i = 0; i < 12 && k > 0; i++) { //it will run till i is less than 12 and k is greater than 0 coz if it is zero then its over 
        k -= a[i];//subtracts current month from k 
        month_count++;
    }

    // Output result
    if (k > 0) {
        cout << -1 << endl;
    } else {
        cout << month_count << endl;
    }

    return 0;
}
