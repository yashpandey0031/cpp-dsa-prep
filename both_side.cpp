#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int left = 0;
    int right = n - 1;

    while (left < right) {
        cout << arr[left] << " " << arr[right] << endl;
        left++;
        right--;
    }

    return 0;
}
