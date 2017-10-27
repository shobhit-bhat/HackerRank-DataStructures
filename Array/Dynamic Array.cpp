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
using namespace std;

#define REP(i,n,x) for(int i = x; i < n; i++)
#define pp(x) push_back(x)

int main(){
	int n,q,a,x,y,pos,lastAns = 0,size;
	cin>>n>>q;
	vector<vector<int>> mat(n);
	while(q--){
		cin>>a>>x>>y;
		pos = (x^lastAns)%n;
		switch(a){
			case 1:	mat[pos].pp(y);
					break;
			case 2:	size = mat[pos].size();
					lastAns = mat[pos][y % size];
					cout<<lastAns<<endl;
					break;
		}
	}
	return 0;
}