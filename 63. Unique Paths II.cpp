#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: 
// 动态规划 
// 注意边界的障碍物，或者一开始就是障碍物
// 一定要考虑各种边界非法情况 

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid.at(0).size();
        int a[m][n];
        a[0][0] = obstacleGrid[0][0]==1? 0:1;
        for(int i=1;i<m;i++)	a[i][0]=(obstacleGrid.at(i).at(0)==1?0:a[i-1][0]);
        for(int j=1;j<n;j++)	a[0][j]=(obstacleGrid.at(0).at(j)==1?0:a[0][j-1]);
        for(int i=1;i<m;i++)
        	for(int j=1;j<n;j++)
        		a[i][j] = (obstacleGrid.at(i).at(j)==1? 0 :(a[i-1][j] + a[i][j-1]) );
        return a[m-1][n-1];
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	
	return 0;
}

