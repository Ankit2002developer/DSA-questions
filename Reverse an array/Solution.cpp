// Solution 1

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num;
    cin >> num;
    int arr[10000];
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    int array[10000];
    for(int i = 0; i < num; i++) {
        array[num - i - 1] = arr[i];
    }
    cout << "Array after reversing: ";
    for(int i = 0; i < num; i++) {
        cout << array[i] << " ";
    }
}


// Solution 2

#include <iostream>
#include <vector>
using namespace std;

void reverse(int arr[], int size) {
    cin >> size;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int start = 0;
    int end = size - 1;
    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[10000];
    int size;
    reverse(arr, size);
    print(arr, size);
    return 0;
}
