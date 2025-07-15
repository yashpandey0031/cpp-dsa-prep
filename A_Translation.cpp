#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool is_correct(string t,string s){ //reversing the string
    reverse(s.begin(), s.end());
    return s == t; //return should be checked 
}

int main(){
    string t;
    string s;
    cin >> t >> s;

    if(is_correct(t,s)){
        cout << "YES";
    }else {
        cout << "NO";
    }

    return 0;
}

