#include <iostream>
using namespace std;

#include <bits/stdc++.h> 

bool isPossible(int arr[], int n, int b, int mid){
	int studentCount = 1;
	int pageSum = 0;

	for(int i = 0; i<n; i++){
       
		if(pageSum + arr[i] <= mid){
             //cout<<"pagesum "<<pageSum<<endl;
			pageSum += arr[i];
            
		}else{
			studentCount++;
			if(studentCount > b || arr[i] > mid){
				return false;
			}
			pageSum = arr[i];
		}
		cout<<pageSum<<endl;
	}
	return true;
}

int main()
{
    int pages[4] = {10, 20, 30, 40 };
    int n = 4;
    int b = 2;


	int s = 0;
	int sum = 0;
	int ans = -1;

	for(int i = 0; i < n; i++){
		sum += pages[i];
	}

	int e = sum;
	int mid = s + (e-s)/2;

	while(s<=e){
        //cout<<"this is mid "<<mid<<endl;
		if(isPossible(pages, n , b, mid)){
			ans = mid;
            //cout<<"this is ans "<<ans<<endl;
			e = mid-1;
		}
        else{
			s= mid+1;
		}
		mid = s + (e-s)/2;
	}
	//cout<<"this si asnwer "<<ans<<endl;
	return ans;
}