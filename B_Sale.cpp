#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n,m;
    cin >> n >> m; //n=total number of tv sets / m=total bob can carry

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i]; //taking the values for vector
    }

    int sum = 0;
    sort(a.begin(), a.end()); // sort in ascending to get most negative first
    for (int i = 0; i < m && i < n; i++) {
        if (a[i] < 0) sum += -a[i]; // take only negative-priced TVs
    }
    cout << sum;


    return 0;

}
