#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int arr[4] = {20, 15, 10, 17};
    int n = 4;
    int m = 7;
    sort(arr, arr + n);

    int sum = 0, s = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;

    while(s<=e){
        int ss = 0;
        for(int i = 0; i < n; i++){
            if(mid<=arr[i]){
                ss += arr[i] - mid;
            }
        }
        if(ss<m){
            e = mid-1;
        }else if(ss == m){
            cout<<mid;
            break;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }

}