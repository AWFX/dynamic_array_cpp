#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}