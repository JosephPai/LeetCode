#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int a,b,i;
	while(scanf("%d%d",&n,&m) != EOF){
		if(n==0 && m==0)	break;
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(j=0;j<m;j++)	scanf("%d",&b[j]);		
		sort(a,a+n);
		sort(b,b+m);		
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i]==b[j])	break;
			}
			if(j==m){
				printf("%d ",a[i]);
				nu = 1;
			}
		}
		if(nu==0)	printf("NULL");
		printf("\n");
		nu = 0;
	}
	
	return 0;
}