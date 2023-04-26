#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[100], n;

    // Input the size of the array and its elements
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    // Remove duplicates
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i+1]) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Print the unique elements
    cout << "The unique elements of the array are: ";
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
