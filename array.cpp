#include <iostream>
using namespace std;
int maxint(int* arr, int n) {
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_idx]) {
            max_idx = i;
        }
    }
    return max_idx;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_idx = maxint(arr, n);
    cout << "The largest element is " << arr[max_idx] << " at index " << max_idx << endl;
    return 0;
}