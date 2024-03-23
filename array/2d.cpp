#include <iostream>
using namespace std;

int sum(int arr[][4], int n, int k ){
   int  sum = 0;
   for( int i=0; i<n; i++){
    sum += arr[k-1][i];
   }
    return sum;
}

int main(){
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
        
    }


    cout<<sum(arr, 4, 1);
}