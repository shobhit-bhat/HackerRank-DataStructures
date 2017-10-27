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
	int n,m,b,k;
	long a,max = 0;
	cin>>n>>m;
	vector<long> arr(n,0);
	REP(i,m,0){
		cin>>a>>b>>k;
		a--;
		b--;
		arr[a]+=k;
		arr[b+1]-=k;
	}
	a = 0;
	REP(i,n,0){
		a+=arr[i];
		if(a > max){
				max = a;
			}
	}
	cout<<max;
	return 0;
}