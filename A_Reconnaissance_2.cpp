//this is flawed , it doesnt work ffs

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v(n); // creates vector of size n

    for(int i = 0; i < n; i++) { //takes values
        cin >> v[i];
    }

    int mini_differnce = abs(v[0]-v[-1]);//-1 is nothing but v-1
    int p1 = 1;
    int p2 = n;

    for(int i = 0;i<=n;i++){
        int differnce = abs(v[i] - v[i-1]);
        if (differnce < mini_differnce){
            mini_differnce = differnce;
            p1 = i + 1 ;
            p2 = i;
        };
        
        
        

    }

    cout  << p1 << " " << p2;

    



    return 0;
}
