#include <iostream>
using namespace std;

bool binarysearch(int s, int e, int k, int *arr)
{
    int mid = s + (e - s) / 2;
    bool ans = false;
    if (s > e)
    {
        return ans;
    }
    if (arr[mid] == k)
    {
        return true;
    }
    else if (arr[mid] > k)
    {
        e = mid - 1;
        ans = binarysearch(s, e, k, arr);
    }
    else
    {
        s = mid + 1;
        ans = binarysearch(s, e, k, arr);
    }
    return ans;
}

int main()
{
    int arr[4] = {1, 2, 3, 5};
    int size = 4;
    int key = 8;
    int s = 0;
    int e = size - 1;

    cout << binarysearch(s, e, key, arr);
}