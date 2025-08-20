#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    
    if(a.find("0000000") != std::string::npos || a.find("1111111") != std::string::npos){ //code for finding a substring in a string
        cout << "YES";
    }else{
        cout << "NO";
    }   

    return 0;
}