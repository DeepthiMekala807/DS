#include <iostream>
#include <stack>
using namespace std;
void rotateArrayWithStack(int arr[], int size, int k) {
    stack<int> stack;
    for (int i = size - k; i < size; i++) {
        stack.push(arr[i]);
    }
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = stack.top();
        stack.pop();
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    int arr[40];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotateArrayWithStack(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}