#include <iostream>
#include <vector>
#include <array>
using namespace std;

void uniqueElement(int arr[], int size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "The unique elements in the array are: ";
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int size;
    int arr[10000];
    uniqueElement(arr, size);
    return 0;
}
