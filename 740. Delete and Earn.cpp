#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: https://leetcode.com/problems/delete-and-earn/discuss/109895/
// ¶¯Ì¬¹æ»® 
//The optimal final result can be derived by keep updating 2 variables skip_i, take_i, which stands for:
//skip_i : the best result for sub-problem of first (i+1) buckets from 0 to i, while you skip the ith bucket.
//take_i : the best result for sub-problem of first (i+1) buckets from 0 to i, while you take the ith bucket.

using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        vector<int> values(n, 0);
        for (int num : nums)
            values[num] += num;
        
        int take=0, skip=0;
        for(int i=0; i<n; i++){
        	int takei = skip + values[i];
        	int skipi = max(skip,take);
        	take = takei;
        	skip = skipi;
		}
		return max(take,skip);
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	
	return 0;
}

