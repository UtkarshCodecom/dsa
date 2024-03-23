#include <iostream>
#include <math.h>
using namespace std;

int convert(int n)
{
    int i = 0;
    int num = 0;
    while (n != 0)
    {

        num = pow(10, i) * (n % 2) + num;

        i++;
        n = n / 2;
    }
    return num + 1;
}

int main()
{
    int n;
    cin >> n;

    // int ans = 0;
    // int i = 0;
    // while (n!=0)
    // {
    //     int digit = n % 10;
    //     if(digit == 1){
    //         ans = pow(2, i) + ans;
    //     }
    //     i++;
    //     n = n/10;
    // }

    cout << convert(n);
}