#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: 
// ��¥��  ������n�׵Ŀ������� n-1 �׵Ŀ�����+1�� �� n-2 �׵Ŀ�����+2������a[i] = a[i-1] + a[i-2] 

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

