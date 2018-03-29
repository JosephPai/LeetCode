#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	int n,i;
	long long int dp[53];
	dp[1]=3;dp[2]=6;dp[3]=6;
	for(i=4;i<53;i++){
		dp[i] = dp[i-1] + 2*dp[i-2];
	}
	while(scanf("%d",&n) != EOF){
		printf("%lld\n",dp[n]);
	}
	
	return 0;
}