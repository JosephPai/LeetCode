#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: https://www.cnblogs.com/leavescy/p/5878336.html
// 动态规划 / 中心扩展 

using namespace std;

class Solution {
	// 中心扩展法 
	public static String findLongestPalindrome2(String s){
          int len = s.length();
          int maxlength = 0;
          int start = 0;
          // 类似于aba这种情况，以i为中心向两边扩展
          for(int i = 0; i < len; i++){
              int j = i - 1;
              int k = i + 1;
              while(j >= 0 && k < len && s.charAt(j) == s.charAt(k)){
                 if(k - j + 1 > maxlength){
                     maxlength = k - j + 1;
                     start = j;
                 }
                 j --;
                 k ++;
             }
         }
         // 类似于abba这种情况，以i，i+1为中心向两边扩展
         for(int i = 0; i < len; i++){
             int j = i;
             int k = i + 1;
             while(j >= 0 && k <len && s.charAt(j) == s.charAt(k)){
                 if(k - j + 1 > maxlength){
                     maxlength = k - j + 1;
                     start = j;
                 }
                 j --;
                 k ++;
             }
         }
         if(maxlength > 0)
             return s.substring(start, start + maxlength);
         return null;
     }


public:
	// 动态规划 
    string longestPalindromeDP(string s) { 	
        int n = s.length();  
        int longestBegin = 0;  
        int maxLen = 1;  
        bool table[1000][1000] = {false};  
        for (int i = 0; i < n; i++) {  
            table[i][i] = true;  
        }  
        for (int i = 0; i < n-1; i++) {  
            if (s[i] == s[i+1]) {  
                table[i][i+1] = true;  
                longestBegin = i;  
                maxLen = 2;  
            }  
        }  
        for (int len = 3; len <= n; len++) {  
            for (int i = 0; i < n-len+1; i++) {  
            int j = i+len-1;  
            if (s[i] == s[j] && table[i+1][j-1]) {  
                table[i][j] = true;  
                longestBegin = i;  
                maxLen = len;  
      			}  
    		}  
  		}  
  		return s.substr(longestBegin, maxLen); 
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	//cout << s.uniquePaths(4,4);
	
	return 0;
}

