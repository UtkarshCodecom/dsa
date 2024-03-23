#include <iostream>
using namespace std;

bool present(int array[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            return true;
        }
    }
    return false;
}

void reverseArray(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void swapAlternate(int array[], int n){
    for (int i = 0; i < n-1; i++)
    {
        swap(array[i], array[i+1]);
        i++;
    }
    
}

int main()
{
    int array[8] = {1, 2, 3, 4, 5,6, 7, 8};

    swapAlternate(array, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }
}