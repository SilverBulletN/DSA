#include<bits/stdc++.h>
using namespace std;

void sortString(string &str){
    sort(str.begin(), str.end());
}

void printstring(string str){
    for (int i = 0; str[i] != '\0'; i++){
        cout << str[i];
    }
}

string hop(string str1, string str2){
    unsigned int idx1 = 0, idx2 = 0, i = 0;
    string ans;
    while(idx1 < str1.length() && idx2 < str2.length()){
        if (str1[idx1] < str2[idx2]) ans[i++] = str1[idx1++];
        else if (str1[idx1] > str2[idx2]) ans[i++] = str2[idx2++];
        else {
            ans[i++] = str1[idx1++];
            idx2++;
            }
    }
    while(idx1 < str1.length()) ans[i++] = str1[idx1++];
    while(idx2 < str2.length()) ans[i++] = str2[idx2++];
    return ans;
}

// string giao(string &s1, string &s2){

// }

int main(){
    string str1 = "abhcbsABdJk";
    string str2 = "abllioaBJk";
    sortString(str1);
    sortString(str2);
    printstring(hop(str1, str2));
    return 0;
}