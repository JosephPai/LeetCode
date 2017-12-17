#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: 
// 动态规划 ，子问题为：选定一个节点作为root，左右子树的不同structure相乘 

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        int G[n+1];
    	G[0] = G[1] = 1; 
		for(int i=2; i<=n; ++i){
			G[i]=0;			// 初始化也很重要！！！！不然默认赋值1 
		}  
    	for(int i=2; i<=n; ++i) {
    		for(int j=1; j<=i; ++j) {
    			G[i] += G[j-1] * G[i-j];
    		}
    	}
    	return G[n];
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	cout << s.numTrees(3) << endl;
	
	return 0;
}

