#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n]; 
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n; i++) {
        int small = i; 
        for (int j = i; j < n; j++) {
            if (arr[small] > arr[j]) {
                small = j; 
            }
        }
        if (small != i) {

            int temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Free dynamically allocated memory
    return 0;
}
