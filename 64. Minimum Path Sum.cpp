#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: 
// ¶¯Ì¬¹æ»® 

using namespace std;

class Solution {
public:
	int min(int a,int b){
		return (a<b?a:b);
	}
    int minPathSum(vector<vector<int> >& grid) {
        int m = grid.size();
		int n = grid.at(0).size();
		int a[m][n];
		a[0][0] = grid.at(0).at(0);
		for(int i=1;i<m;i++)
			a[i][0] = a[i-1][0] + grid.at(i).at(0);
		for(int j=1;j<n;j++)
			a[0][j] = a[0][j-1] + grid.at(0).at(j);
		for (int i=1; i<m; i++)
			for(int j=1;j<n;j++)
				a[i][j] = min(a[i-1][j],a[i][j-1]) + grid.at(i).at(j);
		return a[m-1][n-1];
    }
};

int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	Solution s;
	
	
	return 0;
}

