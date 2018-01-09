#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <math.h>

// Solution: 
// 数位处理 

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int a[10],c,flag=0;
        vector<int> b;
        b.reserve(20);
        b.push_back(n);
        for(int i=0;i<10;i++)	a[i]=0;
        c=n;
        while(true){
        	for(int i=9;i>=0;i--){
        		a[i]=c/pow(10,i);
        		c=c%int(pow(double(10),double(i)));
			}
			c=0;
			for(int i=9;i>=0;i--){
				c += pow(a[i],2);
			}
			if(c==1){
				b.clear();
				vector<int>().swap(b);
				return true;
			}
			for(int i=0;i<b.size();i++){
				if(b[i]==c){
					b.clear();
					vector<int>().swap(b);
					return false;
				}
			}
			b.push_back(c);
		}
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	cout << s.isHappy(1111111) << endl;
	
	return 0;
}

