#include <iostream>
using namespace std;
//parameterised way
int  sum_of_natural(int n,int sum,int i){
    if(i>n){
    return sum;
    }

    sum+=i;
    i++;
    sum_of_natural(n,sum,i);
}
//not parametereised way
 int sum_of_natural_no(int i){
     if(i==1){
        return 1;
     }
     return i+sum_of_natural_no(i-1);
 }
int main() {
    
   //cout<<"sum:"<< sum_of_natural(5,0,1);
   cout<<"sum"<<sum_of_natural_no(10);
}