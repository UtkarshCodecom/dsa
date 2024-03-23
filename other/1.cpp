#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

int returnSum(int n)
{
    int reversed_number = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}

int main()
{
    vector<int> a = {4, 5, 1};
    vector<int> b = {3, 4, 5};
    int n = 3, m = 3;
    vector<int> ans;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < max(n, m); i++)
    {
        if (i < n)
        {
            sum1 += pow(10, n - i - 1) * a[i];
            // cout<<sum1<<endl;
        }
        if (i < m)
        {
            sum2 += pow(10, n - i - 1) * b[i];
            // cout<<sum1<<endl;
        }
    }
    int bothsum = sum1 + sum2;
    cout<<bothsum<<endl;
    while (bothsum > 0)
    {
        int lastnum = bothsum % 10;
        ans.push_back(lastnum);
        bothsum = bothsum / 10;
    }
    reverse(ans.begin(), ans.end());
    for(int j = 0; j < ans.size(); j++){
        cout<<ans[j]<<endl;
    }

    return 0;
}