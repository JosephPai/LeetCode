#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: https://discuss.leetcode.com/topic/6413/dp-solution-some-thoughts
// 动态规划 , 以 i 为结尾的最大子串值作为状态 

using namespace std;

class Solution {
public:
	int max(int a,int b){
		return a>b?a:b;
	}
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        dp[0] = nums[0];
        int m = dp[0];
        for(int i=1;i<n;i++){
        	dp[i] = nums[i] + (dp[i-1]>0? dp[i-1] : 0);
        	m = max(m, dp[i]);
		}
		return m;
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	//cout << s.uniquePaths(4,4);
	
	return 0;
}

