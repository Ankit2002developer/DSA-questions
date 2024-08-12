#include <iostream>
#include <vector>
#include <array>
using namespace std;

void swap(int arr[], int size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int start = 0;
    while(start <= size-2) {
        swap(arr[start], arr[start+1]);
        start += 2;
    }
    cout << "The swapped array is: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size;
    int arr[10000];
    swap(arr, size);
    return 0;
}
