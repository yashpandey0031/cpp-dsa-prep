#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a, b;
    ifstream input("input.txt");
    ofstream output("output.txt");

    input >> a >> b;
    output << "Sum is: " << a + b << endl;

    input.close();
    output.close();
    return 0;
}
