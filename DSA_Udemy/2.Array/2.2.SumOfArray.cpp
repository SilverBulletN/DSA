#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int sum  = 0;
    for (int i = 0; i < 10; i++){
        arr[i] = 2*i + 1;
    }
    for (int i = 0; i < 10; i++){
        sum += arr[i];
    }
    cout << sum << endl;
}