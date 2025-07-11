#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int min_value = *min_element(v.begin(), v.end()); //finding the minimum values
    int index = min_element(v.begin(), v.end()) - v.begin(); // finding the index of minimum values
    int count_min = count(v.begin(),v.end(),min_value);//count of minimum values 

    if(count_min == 1 ){ //if the count is equal to 1 then the condition is true 
        cout << index+1;
    }else{
        cout << "Still Rozdil";
    };
    

    
    
    return 0;
}
