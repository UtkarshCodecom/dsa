//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

char getMaxOccuringChar(string str)
{
    int count = 0;
    int index = 0;
    for (int i = 0; i < str.length() - 1; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < str.length(); j++)
        {

            if (str[i] == str[j])
            {
                index= i;
                temp++;
            }
        }
        if (count <= temp)
        {
            if (str[index] > str[i])
            {
                index = i;
            }
        }

        count = temp;
        temp = 0;
        cout << str[index]<<endl;
    }
    return str[index];
}

//{ Driver Code Starts.

int main()
{

    string str;
    cin >> str;
}
// } Driver Code Ends