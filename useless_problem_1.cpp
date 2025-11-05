#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];      // Current element to insert
        int j = i - 1;
        // Move larger elements one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insert the key at correct position
        arr[j + 1] = key;
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    insertionSort(arr);
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";
    return 0;
}