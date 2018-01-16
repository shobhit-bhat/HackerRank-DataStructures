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

int hour_sum(vector<vector<int>> mat, int i, int j){
    int sum = 0;
    sum = mat[i][j] + mat[i][j+1] + mat[i][j+2] + mat[i+1][j+1] + mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2];
    return sum;
}

int main(){
    vector<vector<int>> mat(6,vector<int>(6));
    REP(i,6,0){
        REP(j,6,0){
            cin>>mat[i][j];
        }
    }
    int max_sum = INT8_MIN;
    REP(i,4,0){
        REP(j,4,0){
            max_sum = max(max_sum,hour_sum(mat,i,j));
        }
    }
    cout<<max_sum;
    return 0;
}