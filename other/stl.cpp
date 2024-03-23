#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    //arrya
    array<int, 4> a= {1, 2, 3, 4};
    int size = a.size();
    // a.at[0]
    //a.empty() bool
    //a.front()
    //a.back()


    //vector
    vector<int> v;
    vector<int> v(5, 1);
    v.push_back(2);
    ////v.front()
    //v.back()
    //v.pop_back()
    //v.clear()

    //deque
    deque<int> d;
    //push and pop -> front and back 
    //d.empty() bool
    //d.erase(d.begin(), d.begin() + 1);



    //List
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.erase(l.begin());


    //stack
    stack<string> s;
    //sabse pehle jayga and last maiaayga


    //queue

    queue<int> kk;
    //pehle jayga pehle aayga


    //priority queue
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int> > min;


    //set
    set <int>  ll;
    //set.count() to check precense

    //map
    map<int, string> m;
    m[1] = "test";

    ///algorithm
        //binary search
        vector<int> v;
        //binary_search(v.begin(), v.end(), 6);



        //min and max 
        //swap
        //reverse = reverse(v.begin(), v.end());
        rotate(v.begin(), v.begin() + 1 , v.end());
        //sort
        sort(v.begin(), v.end());



}       

