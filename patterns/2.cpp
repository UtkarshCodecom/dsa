#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row =1;
    while(row<=n){
        int space = 1;
        while(space <= n-row){
            cout<<" ";
            space = space + 1;
        }

      int col = 1;
      while(col<=row){
        cout<<col;
        col = col+1;
      }
      int d = 1;
      int tt = col-1;
      while(tt > d){
        cout<< tt-d;
        d = d + 1;
      }
      cout<<endl;

        row = row+1;
    }

    return 0;
}