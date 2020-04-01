#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int deletions = 0;
    std::string str1 = "";
    std::string str2 = "";
    int cases = 0;
    cin >> cases;
    for(int k =1;k<=cases ; k++) {
        cin >> str1 ;
        cin >> str2;
        std::sort(str1.begin(), str1.end());
        std::sort(str2.begin(), str2.end());
    
    int len1 = str1.length();
    int len2 = str2.length();
    
    for(int i=0;i<(len1>=len2?len1:len2);) {
        if(str1[i] != str2[i]) {
            if(i< str1.length() && str2.find(str1[i], i) == std::string::npos) {
                str1.erase(i,1);
                deletions++;
                len1 = str1.length();
            } else if(i< str2.length() && str1.find(str2[i], i) == std::string::npos) {
                str2.erase(i,1);
                deletions++;
                len2 = str2.length();
            }
        } else {
            i++;
        }
    }
    cout << deletions << endl;
    }
    
}
