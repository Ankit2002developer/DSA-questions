#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << endl;
    int arr[10000];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << endl;
    cout << "Maximum value in array: " << max << endl;
    cout << "Minimum value in array: " << min << endl;
}
