#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = 2*i + 1;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int start = 0, end = n -1;
    while (start <= end){
        swap(arr[start++], arr[end--]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}