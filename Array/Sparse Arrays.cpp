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
	int n,q;
	string x;
	unordered_map<string,int> hash;
	cin>>n;
	REP(i,n,0){
		cin>>x;
		hash[x]++;
	}
	cin>>q;
	REP(i,q,0){
		cin>>x;
		cout<<hash[x]<<endl;
	}
	return 0;
}