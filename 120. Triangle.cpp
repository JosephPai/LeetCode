#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: http://blog.csdn.net/baidu_28312631/article/details/47418773
// 动态规划 : 只维护一个数组，递推形式，即节省时间又节省空间 
/*
2
3,4
6,5,7
4,1,8,3
*/

using namespace std;

class Solution {
public:
	int mini(int a, int b){
		return a<b?a:b;
	}
    int minimumTotal(vector<vector<int> > & triangle) {
        int n,i,j;
		n=triangle.size();
		int dp[n]; 
		for(i=0; i<n; i++){
			dp[i]=triangle.at(n-1).at(i);
		}
		for(i=n-2; i>=0; i--){
			for(j=0; j<=i; j++){
				dp[j] = mini(dp[j], dp[j+1]) + triangle.at(i).at(j);
			}
		}
		return dp[0];
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;

	
	return 0;
}

