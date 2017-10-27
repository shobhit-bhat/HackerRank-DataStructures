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
#include <queue>
#include <unordered_map>
using namespace std;

#define REP(i,n,x) for(int i = x; i < n; i++)
#define pp(x) push_back(x)

int main(){
	int n,d,x;
	cin>>n>>d;
	vector<int> arr(n);
	REP(i,n,n-d){
		cin>>arr[i];
	}
	REP(i,n-d,0){
		cin>>arr[i];
	}
	REP(i,n,0){
		cout<<arr[i]<<" ";
	}
	return 0;
}