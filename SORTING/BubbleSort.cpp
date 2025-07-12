#include <iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}
int main() {
    vector<int>arr={23,12,67,43,10,56};
    bubble_sort(arr);
    cout<<"sorted array:"<<endl;
    for(int i=0;i<arr.size();i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}