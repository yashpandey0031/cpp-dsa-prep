//good question 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for(int j = 0; j < m; j++) { 
        cin >> b[j];
    }

    int max_ratio = 0;
    int count_max = 0;

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            if(b[j] % a[i] == 0){
                int ratio = b[j] / a[i];
                if(ratio > max_ratio){//if current ratio is greater than max_Ratio , update it 
                    max_ratio = ratio;
                    count_max = 1; //count reseter if a new max is found 
                }
                else if(ratio == max_ratio){ //if ratio is equal to max_Ratio  , that means we found  new instanance of it ,so just increase the count by 1
                    count_max++;
                }
            }
        }
    }

    cout << count_max << endl;

    return 0;
}
