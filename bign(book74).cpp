#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

const int maxn = 1000;
struct bign
{
	int len, s[maxn];
	bign() {
		memset(s, 0, sizeof(s));
		len = 1;
	}

	bign operator= (const char* num) {
		len = strlen(num);
		for (int i = 0;i < len;i++) {
			s[i] = num[len - i - 1] - '0';
		}
		return *this;
	}

	bign operator= (int num) {
		char s[maxn];
		sprintf(s, "%d", num);
		*this = s;
		return *this;
	}

	bign(int num) { *this = num; }
	bign(const char* num) { *this = num; }

	string str() const {
		string res = "";
		for (int i = 0;i < len;i++) {
			res = (char)(s[i] + '0') + res;
			if (res == "")	res = "0";
			return res;
		}
	}
};