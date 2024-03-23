#include <iostream> 
using namespace std;

int sayDigits(int n) {
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    return sayDigits(n -1)+
             sayDigits(n -2);
}

int main(){
    int n;
    cin>>n;
    cout<<sayDigits(n);
}