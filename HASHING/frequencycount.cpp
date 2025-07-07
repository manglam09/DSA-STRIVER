#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream input("input.txt"); // open input.txt file

    int n;
    input >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        input >> arr[i];
    }

    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    input >> q;
    while(q--) {
        int number;
        input >> number;
        cout << hash[number] << endl;
    }

    input.close();
    return 0;
}
