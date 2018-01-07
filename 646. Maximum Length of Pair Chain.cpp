#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include<algorithm>

// Solution: https://leetcode.com/problems/maximum-length-of-pair-chain/discuss/105602
// ¶¯Ì¬¹æ»® 

using namespace std;

class Solution {
public:
    int findLongestChain(vector< vector<int> > & pairs) {
        if (pairs.size()==0)	return 0;
        int n = pairs.size(), i, j;
        int dp[n],p[n][2];
        for(i=0; i<n; i++)	dp[i]=1;
        for(i=0;i<n;i++)
        	for(j=0;j<2;j++)
        		p[i][j]=pairs[i][j];
        sort(p,key=index_0);
        for(i=0; i<n; i++)
        	for(j=0; j<i; j++)
        		dp[i] = max(dp[i], p[i][0]>p[j][1]? dp[j]+1: dp[j]);
        return dp[n];
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;;
	int p[3][2];	
	return 0;
}

