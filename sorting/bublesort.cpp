#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10, 8, 7, 9, 4, 6};
    int n = 6;

    for (int j = 1; j < n; j++) {
    int count = 0;                                    //8
    for (int i = 0; i < n  - j; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
        count++;
      }
    }
    if (count == 0) {
      break;
    }
  }
  
}