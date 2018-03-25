#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	int n,m,i,bp[50];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		bp[1]=1;
		bp[2]=1;
		for(i=3;i<=m;i++)	bp[i]=bp[i-1]+bp[i-2];
		printf("%d\n",bp[m]);
	}
	
	return 0;
}