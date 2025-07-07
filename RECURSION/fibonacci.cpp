#include <iostream>
using namespace std;

int nthFibonacci(int num){
    if(num==0||num==1){
        return num;
    }
   
   return  nthFibonacci(num-1) + nthFibonacci(num-2);
}

int main() {
    cout<<nthFibonacci(10);
    return 0;
}