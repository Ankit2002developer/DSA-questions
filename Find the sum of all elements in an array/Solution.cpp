#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    int arr[10000];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < num; i++) {
        sum += arr[i];
    }
    cout << "Sum of the elements of array is: " << sum << endl; 
}
