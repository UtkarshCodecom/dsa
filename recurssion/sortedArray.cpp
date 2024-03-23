#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return checkSorted(arr + 1, size - 1);
    }
}

int sum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    return arr[0] + sum(arr + 1, size - 1);
}

bool linearsearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }else{
        return linearsearch(arr + 1, size - 1, key);
    }

    // if (linearsearch(arr + 1, size - 1, key))
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
}

int main()
{
    int arr[4] = {1, 2, 3, 5};
    int size = 5;
    int key = 4;

    bool ans = checkSorted(arr, size);
    int arrsum = sum(arr, size);
    bool rr = linearsearch(arr, size, key);

    cout << rr;
}