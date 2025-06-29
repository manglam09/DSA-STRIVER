#include <iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>&arr,int start,int end){
    if(start>=end){
        return arr;
    }
   swap(arr[start],arr[end]);
   reverse(arr,start+1,end-1);

}
int main() {
    vector<int>arr={1,2,3,4,5};
     int start=0;
    int end=arr.size()-1;
    reverse(arr,start,end);
    for(int i=0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}