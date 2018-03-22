#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

int main()
{
	freopen("input.txt","r",stdin);
	int a[30][30],i,j,n;
	for(i=0; i<30; i++)
	    for(j=0; j<30; j++){
	    	a[i][j] = 0;
			if(j==0)	a[i][j]=1;
		}
	for(i=1;i<30;i++){
		for(j=1;j<=i;j++){
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	while(scanf("%d",&n) != EOF){
		for(i=0;i<n;i++){
			printf("%d",a[i][0]);
			for(j=1;j<=i;j++)
			    printf(" %d",a[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}