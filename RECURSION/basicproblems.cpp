#include <iostream>
using namespace std;

//print name 5 times
void PrintNames(int count){
    if(count>5)
     return;
     
    cout<<"manglam"<<endl;
    count++;
    PrintNames(count);
}

//printing n to 1
void printreverse(int n){
    if(n<=0)
    return;
 cout<<n<<" ";
 printreverse(n-1);
}

//print n to 1 using backtrack
void print1ton(int n){
    if(n<=0)
    return;
print1ton(n-1);
 cout<<n<<" ";
 
}
int main() {
    PrintNames(0);
    printreverse(10);
    print1ton(10);
    return 0;
}
