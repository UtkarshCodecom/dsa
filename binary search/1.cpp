#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (end - start) / 2 + start;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (end - start) / 2 + start;
    }
    return -1;
}

int firstocc(int arr[], int n , int k){
       int s = 0, e = n-1, ans = -1;
       int m = s+ (e-s)/2;

       while(s<=e){
           if(arr[m] == k){
               ans = m;
               e = m-1;
           }else if(k > arr[m]){
               s= m+1;
           }else{
               e = m-1;
           }
           m = s+ (e-s)/2;
       }
       return ans;
   }
   int lastocc(int arr[], int n , int k){
       int s = 0, e = n-1;
       int m = s+ (e-s)/2;
       int ans= -1;
       

       while(s<=e){
           if(arr[m] == k){
               ans = m;
               s = m+1;
           }else if(k > arr[m]){
               s= m+1;
           }else{
               e = m-1;
           }
           m = s+ (e-s)/2;
       }
       return ans;
   }

int main()
{
    // monotonic (increasing or decreasing)
    int arr[7] = {0, 0, 1, 1, 2, 2, 2};

    int index  = lastocc(arr, 7, 2);
    cout<<index;
}