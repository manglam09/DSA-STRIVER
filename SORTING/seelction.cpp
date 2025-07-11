#include <iostream>
#include <vector>
using namespace std;

void selection(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> arr;
    int n;

    cout << "Enter the size of array: ";
    cout.flush();         // ✅ Ensures prompt is printed
    cin.sync();           // ✅ Clears any buffered input
    cin >> n;

    arr.resize(n);
    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection(arr);
    return 0;
}
