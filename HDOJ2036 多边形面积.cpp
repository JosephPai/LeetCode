#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int n,a[101],b[101];
	int s=0;
	while(scanf("%d",&n) != EOF){
		if(n==0)	break;
		for(int i=0;i<n;i++){
			scanf("%d%d",&a[i],&b[i]);
		}
		for(int i=0;i<n-1;i++){
			s += (a[i]*b[i+1] - b[i]*a[i+1]);
		}
		s += a[n-1]*b[0] - b[n-1]*a[0];
		printf("%.1f\n",0.5*abs(s));
		s=0;
		
	}
	
	return 0;
}