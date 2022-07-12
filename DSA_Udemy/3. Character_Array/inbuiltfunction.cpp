#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    cout << "Length of str1: " << strlen(str1) << endl;
    if (!strcmp(str1, str2)) cout << "equal";
    else cout << "not equal";


}