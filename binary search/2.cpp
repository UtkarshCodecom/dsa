#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {0, 5, 10, 2};
    int size = 4;
    int s = 0;
    int e = size - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[m] > arr[m + 1] && arr[m] > arr[m - 1])
        {
            break;
        }
        else if (arr[m] > arr[m + 1] && arr[m] < arr[m - 1])
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    cout<< m;
}
