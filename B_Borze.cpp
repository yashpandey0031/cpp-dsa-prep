#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); ) {
        if (x[i] == '.') {
            cout << "0";
            i++;
        } else if (x[i] == '-' && x[i + 1] == '.') {
            cout << "1";
            i += 2;
        } else if (x[i] == '-' && x[i + 1] == '-') {
            cout << "2";
            i += 2;
        }
    }

    cout << endl;
    return 0;
}
