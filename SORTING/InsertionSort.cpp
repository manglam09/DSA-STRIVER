#include <iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
      int key=arr[i];
      int j=i-1;
      while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1]=key;
    }
}

int main() {
    vector<int>arr={12,63,1,67,54,32,15};
    insertion_sort(arr);
    cout<<"Sorted array"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}