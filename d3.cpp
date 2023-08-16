// Rotate Array
#include <iostream>
using namespace std;
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotate(int arr[], int size, int k) {
    reverseArray(arr, 0, size - 1);  
    reverseArray(arr, 0, k - 1);      
    reverseArray(arr, k, size - 1);   
}
int main() {
    int n, k;
    cin >> n >> k;

    int arr[40];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotate(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}