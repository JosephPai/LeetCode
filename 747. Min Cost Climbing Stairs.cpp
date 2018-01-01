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
	int mini(int a, int b){
		return a<b?a:b;
	}
    int minCostClimbingStairs(vector<int>& cost) {
        int n;
        n=cost.size();
        int i,a[n+1];
        a[0] = 0;
        a[1] = 0;
        for(i=2;i<=n;i++){
        	a[i] = mini( a[i-2]+cost[i-2], a[i-1]+cost[i-1] );
		}
		return a[n];
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	vector<int> v;
	v.push_back(1);
	v.push_back(100);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(100);
	v.push_back(1);
	v.push_back(1);
	v.push_back(100);
	v.push_back(1);
	cout << s.minCostClimbingStairs(v) << endl;
	
	return 0;
}

