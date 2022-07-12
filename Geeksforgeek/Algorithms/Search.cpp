#include <bits/stdc++.h>
using namespace std;
// O(n)
int linearSearch(int arr[], int n, int x){
    for (int i = 0; i < n; i++)
        if (arr[i] == x) return i;
    return -1;
}

//O(logn) sorted arr
int binarySearch(int arr[], int l, int r, int x){
    if (l <= r){
        int mid = l + (r - l)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

//O(sqrt n) sorted array
int jumpSearch(int arr[], int x, int n){
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)]< x){
        prev = step;
        step += sqrt(n);
        if (prev > n) return -1;
    }
    while (arr[prev] < x){
        prev++;
        if (prev == min(step, n)) return -1;
    }
    if (arr[prev] == x) return prev;
    return -1;
}

// < O(log n) sort array
int interpolationSearch(int arr[], int lo, int hi, int x){
    int pos;
    if(lo <= hi && x >= arr[lo] && x <= arr[hi]){
        pos = lo + (hi - lo) * (double)(x - arr[lo]) / (arr[hi] - arr[lo]);
        if (arr[pos] == x) return pos;
        if (arr[pos] < x) return interpolationSearch(arr, pos + 1, hi, x);
        return interpolationSearch(arr, lo, pos - 1, x);
    }
    return -1;
}

// O(log n) sort array binary search
int exponentialSearch(int arr[], int n, int x){
    if (arr[0] == x) return 0;
    int i = 1;
    while (i < n && arr[i] < x)
        i*=2;
    return binarySearch(arr, i / 2, min(i, n-1), x);
}
int main(){
    int arr[10] = {1, 2, 5, 6, 9, 11, 15, 18, 19, 22};
    cout << linearSearch(arr, 10, 11) << "  " << binarySearch(arr, 0, 10, 11) << "  "
    << jumpSearch(arr, 11, 10) << "  " << interpolationSearch(arr, 0, 10, 11) << "  " << exponentialSearch(arr, 10, 11);


}