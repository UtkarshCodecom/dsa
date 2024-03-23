#include <iostream>
using namespace std;

int factorial(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f = f*i;
    }
    return f;
}

int main(){
    int n;
    int r;
    cin>> n >> r;

    cout<<factorial(n)/factorial(r)/factorial(n-r);
}

