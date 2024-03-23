#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10, 8, 7, 9, 4, 6};
    int n = 6;

     for(int i  = 1; i<n; i++){
        int temp = arr[i]; //8
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){ ///10
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}