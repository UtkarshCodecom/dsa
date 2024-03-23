#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int> &digits)
{
    int k = 0;
    for (int i = 0; i < digits.size(); i++)
    {
        k = k * 10 + digits[i];
    }
    return k + 1;
}

void make(vector<int> &digits, int sum)
{
    vector<int> ans;
    while (sum != 0)
    {
        ans.push_back(sum % 10);
        sum = sum / 10;
    }
    return ans;
}
int main()
{
    vector<int> digits = {1, 2, 3};
    int sm = sum(digits) + 1;
    make(digits, sm);

    cout << "ans->"<< digits[];
}