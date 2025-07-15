    //this solution is wrong 
    
    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main(){
        int n , m;
        cin >> n >> m;
        
        vector<int> v(m);
            for(int i = 0; i < n; i++) {
        cin >> v[i];
        }

        int time_Taken = 0;
        time_Taken += v[0]-1;

        for(int i = 0 ; i>m-1;i++){
            if(v[i-1]>=v[i]){
                time_Taken += v[i+1] - v[i];
            }
            else{
                time_Taken += n - v[i] + v[i+1];
            }
        }

        cout << (time_Taken);
        
        

        
        
        return 0;
    }
