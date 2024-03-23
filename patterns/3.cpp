#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int i = 1;
        while(i<=n-row+1){
            cout<<i;
            i = i+1;
        }
        int star = 1;
        while(star<=row*2-1){
            cout<<"*";
            star = star+1;
        }
        while(i>1){
            cout<<i-1;
            i = i-1;
        }
        cout<<endl;
        row = row+1;
    }
    return 0;
}