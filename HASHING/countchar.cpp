#include <iostream>
#include <fstream>
using namespace std;

int countchar(char a, string s) {
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }
    return hash[a - 'a'];
}

int main() {
    string s = "abcdabehf";
    string ans = "ayude";

    for (int i = 0; i < ans.size(); i++) {
        cout << countchar(ans[i], s) << endl;
    }

    return 0;
}
