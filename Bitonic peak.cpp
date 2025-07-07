#include <bits/stdc++.h>
using namespace std;

int binary_search(const vector<int>& a){
    int lo=1, hi=a.size()-2;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(a[mid]>a[mid-1] and a[mid]>a[mid+1]) return mid;
        if(a[mid]>a[mid-1] and a[mid]<a[mid+1]) lo=mid+1;
        if(a[mid]<a[mid-1] and a[mid]>a[mid+1]) hi=mid-1;
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 3, 4, 6, 8, 9, 5, 2};
    cout<<(binary_search(arr)!=-1 ? to_string(arr[binary_search(arr)]) : "The array is not bitonic.");
    return 0;
}
