#include <iostream>
#include <vector>

using namespace std;

// Binary search with recursion
int binarySearchRecursive(vector<int>& arr, int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            return binarySearchRecursive(arr, left, mid - 1, x);
        } else {
            return binarySearchRecursive(arr, mid + 1, right, x);
        }
    }

    return -1;
}

// Binary search without recursion
int binarySearch(vector<int>& arr, int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();
    int x = 6;

    // Binary search with recursion
    int indexRecursive = binarySearchRecursive(arr, 0, n - 1, x);
    if (indexRecursive == -1) {
        cout << "Element not found with binary search (recursive)" << endl;
    } else {
        cout << "Element found at index " << indexRecursive << " with binary search (recursive)" << endl;
    }

    // Binary search without recursion
    int index = binarySearch(arr, 0, n - 1, x);
    if (index == -1) {
        cout << "Element not found with binary search" << endl;
    } else {
        cout << "Element found at index " << index << " with binary search" << endl;
    }

    return 0;
}
