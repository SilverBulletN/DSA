#include <iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    while (input[count] != '\0')
        count++;
    return count;
}

void reverse(char input[]){
    int s = 0;
    int e = length(input) - 1;
    while (s < e)
        swap(input[s++], input[e--]);
}

int main(){
    char input[100] = {"Hoang Duc Nguyen"};
    reverse(input);
    cout << input;


}