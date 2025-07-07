#include <iostream>
#include<string>
using namespace std;

 bool palindrome(string s,int start,int end){
    if(start>end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return palindrome(s,start+1,end-1);
 }
int main() {
    string s="mamiimam";
    cout<<palindrome(s,0,s.size()-1);
    return 0;
}