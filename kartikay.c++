#include <iostream>
using namespace std;

int main() {
    // Method 1: Static array
    int arr[2] = {10, 20};
    
    // Method 2: Without initialization
    int arr2[2];
    arr2[0] = 30;
    arr2[1] = 40;
    
    // Access and print elements
    cout << "Array 1: " << arr[0] << ", " << arr[1] << endl;
    cout << "Array 2: " << arr2[0] << ", " << arr2[1] << endl;
    
    return 0;
}