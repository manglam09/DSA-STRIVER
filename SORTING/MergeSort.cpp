#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> ans;
    int i = start, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            ans.push_back(arr[i++]);
        } else {
            ans.push_back(arr[j++]);
        }
    }

    while (i <= mid) ans.push_back(arr[i++]);
    while (j <= end) ans.push_back(arr[j++]);

    // Copy sorted values back to original array
    for (int k = 0; k < ans.size(); k++) {
        arr[start + k] = ans[k];
    }
    cout<<endl;
}

void mergesort(vector<int>& arr, int start, int end) {
    if (start >= end) return;
    int mid = (start + end) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main() {
    vector<int> arr = {1, 45, 23, 89, 65, 24};
    mergesort(arr, 0, arr.size() - 1);
   cout<<"sorted array"<<endl;
    for (int x : arr) cout << x << " ";
    return 0;
}
