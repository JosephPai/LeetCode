#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: 
// 爬楼梯  爬到第n阶的可能性是 n-1 阶的可能性+1步 和 n-2 阶的可能性+2步，即a[i] = a[i-1] + a[i-2] 

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a[n+1],i;
        a[0]=1,a[1]=1;
        for(i=2;i<=n;i++)
        	a[i] = a[i-1] + a[i-2];
        return a[n];
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	cout << s.climbStairs(3) << endl;
	
	return 0;
}

