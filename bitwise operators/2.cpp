#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 5;
    //101
    //111
    int i = 0;
       while(n != 0){
        n = n>>1;
        i++;
       }
       cout<<i<<endl;
       int num1 = 0;
       int j = 0;
       while(j<i){
        num1 = pow(2, j) + num1;
        j++;
       }
       cout<<num1<<endl;
       int r = -5;
       cout<<(~r);

}