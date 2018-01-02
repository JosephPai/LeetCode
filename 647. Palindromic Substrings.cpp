#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution
// 动态规划 / 中心扩展 

using namespace std;

class Solution {
public:
	// 动态规划 
    int countSubstrings(string s) { 	
        int n = s.length();  
        int count=n; 
        bool table[1000][1000] = {false};  
        for (int i = 0; i < n; i++) {  
            table[i][i] = true;  
        }  
        for (int i = 0; i < n-1; i++) {  
            if (s[i] == s[i+1]) {  
                table[i][i+1] = true;  
                count++;
            }  
        }  
        for (int len = 3; len <= n; len++) {  
            for (int i = 0; i < n-len+1; i++) {  
            int j = i+len-1;  
            if (s[i] == s[j] && table[i+1][j-1]) {  
                table[i][j] = true;  
                count++;
      			}  
    		}  
  		}  
  		return count; 
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	cout<<s.countSubstrings("aaa");
	
	return 0;
}

