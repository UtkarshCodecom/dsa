#include <iostream>
using namespace std;

int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {8, 6, 3, 0, 5};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                swap(arr[i], arr[j]);
            }
        }
        
    }

    print(arr, n);
}