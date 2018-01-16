#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip> 
#include <deque>
#include <stack>
#include <list>
using namespace std;

#define REP(i,n,x) for(int i = x; i < n; i++)

int main(){
    int n;
    vector<int> arr;
    cin>>n;
    arr.resize(n);
    REP(i,n,0){
        cin>>arr[i];
    }
    REP(i,n,0){
        cout<<arr[n-i-1]<<" ";
    }
    return 0;
}