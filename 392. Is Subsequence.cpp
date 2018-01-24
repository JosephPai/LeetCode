#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution:

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
    	if(s.length()==0)	return true;
    	if(s.length() > t.length())	return false;
    	if(s.length() == t.length()){
    		return s==t;
		}
        int indexS = 0, indexT = 0;
        while (indexT < t.length()) {
            if (t[indexT] == s[indexS]) {
                indexS++;
                if (indexS == s.length()) return true;
            }
            indexT++;
        }
        return false;
	}
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	cout << s.isSubsequence("axc","axc") << endl;
	
	return 0;
}

