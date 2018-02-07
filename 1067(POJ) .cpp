#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <math.h>

// Solution: http://www.xuebuyuan.com/1968244.html
// http://blog.csdn.net/u014492513/article/details/44621847
// Íþ×ô·ò²©ÞÈ
using namespace std;

int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF){
		if(a > b){
			int t;
			t=a;
			a=b;
			b=t;
		}
		int k = b-a;
		int c = k*(1+sqrt(5))/2;
		if(c==a)	printf("0\n");
		else	printf("1\n");
	}
	return 0;
}

