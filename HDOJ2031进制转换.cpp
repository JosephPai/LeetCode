#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

int main()
{
	freopen("input.txt","r",stdin);
	int n,r,i,x;
	char prt[1000],num[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','c','D','E','F'};
	while(scanf("%d%d",&n,&r) != EOF){
		if(n<0)x=-1;
		else x=1;
		n*=x;
		for(i=0;i>=0;i++){
			prt[i]=num[n%r];
			if(n/r==0)break;
			n/=r;
		}
		if(x<0)prt[++i]='-';
		for(;i>=0;i--)printf("%c",prt[i]);
		printf("\n");
	}
}