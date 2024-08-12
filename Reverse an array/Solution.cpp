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
