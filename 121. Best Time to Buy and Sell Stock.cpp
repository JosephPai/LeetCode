#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: 
// 动态规划 : 维护了两个数组，一个记录前i个的最大收益，一个记录前i个的最小值 ,只需遍历一次 

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0)	return 0;
        int a[n],min[n],i,j;
        a[0]=0;
		min[0]=prices.at(0);
        for(i=1;i<n;i++){
        	if(prices.at(i) > min[i-1]){
        		if((prices.at(i)-min[i-1]) > a[i-1])
        			a[i]=prices.at(i)-min[i-1];
        		else	a[i]=a[i-1];
        		min[i]=min[i-1];
			}
			else{
				min[i] = prices.at(i);
				a[i]=a[i-1];
			}
		}
		return a[n-1];
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	vector<int> v;
	v.push_back(7);
	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(6);
	cout << s.maxProfit(v) << endl;
	
	return 0;
}

