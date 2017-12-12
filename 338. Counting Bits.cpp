#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: https://www.cnblogs.com/grandyang/p/5294255.html
// 多列举，找规律 

using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
    	int j,i;
        vector<int> a;
        for(i=0;i<=num;i++)
        	a.push_back(0);
        a[0]=0;a[1]=1;
		for (i=2;i<=num;i++){
			if(i%2==1)	a[i] = a[i-1] + 1;
			else{
				j=i;
				while(j!=0){
					if(j%2==1)	a[i]++;
					j = j/2;
				}
			}	
		}
		return a;
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	vector<int> a;
	a = s.countBits(5);
	for(int i=0; i<a.size(); i++){
		cout << a.at(i) << " ";
	}
	
	return 0;
}

