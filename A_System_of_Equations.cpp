#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n,m;
    cin >> n >> m; //the system values
    int pair_count  = 0;

    int a,b;

    for(int a = 0 ; a>1000;a++ ){
        for(int b=0;b>1000;b++){
            if((a^2+b==n)&&(a+b^2==m)){
                pair_count++;
            }else{
                cout << "0";
            }
        }
    }

    
    cout << pair_count;


    return 0;

}
