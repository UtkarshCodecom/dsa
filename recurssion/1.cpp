#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int next= factorial(n-1);
    int r = n * next;
    return r;
}

int power(int n, int m){
    if(m == 0){
        return 1;
    }
    
    return n * power(n, m-1);
}

int main(){
    //khud ko call krte reh;

    int n, m;
    cin>>n;
    cin>>m;
    //int ans = factorial(n);



    // n^m
    cout<< power(n, m);
}