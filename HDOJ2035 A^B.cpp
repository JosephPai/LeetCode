#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int a,b,c=1;
	while(scanf("%d%d",&a,&b) != EOF){
		if(a==0 && b==0)	break;
		for(int i=0;i<b;i++){
			c *= a%100000;
			c %= 100000;
		}
		printf("%d\n",c%1000);
		c = 1;
	}
	
	return 0;
}