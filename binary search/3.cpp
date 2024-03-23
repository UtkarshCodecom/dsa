#include <iostream>
using namespace std;

int main()
{
    int nums[6] = {1,7,3,6,5,6};
    int left = 0, right = 0;
    int i = 0;
    while (i < 6)
    {
        for (int j = 0; j < i; j++)
        {
            left = left + nums[j];
        }
        for (int k = i + 1; k < 6; k++)
        {
            right = right + nums[k];
        }
        if (left == right)
        {
            return i;
        }
        cout<<left<<" "<<right<<endl;
        i++;
        left = 0;
        right = 0;
    }
   
}