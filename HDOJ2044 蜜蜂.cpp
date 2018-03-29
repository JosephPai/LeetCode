#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	int n,a,b;
	long long int dp[55];
	dp[0]=1;dp[1]=1;dp[2]=2;
	for(int i=3;i<55;i++){
		dp[i] = dp[i-1]+dp[i-2];
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		printf("%lld\n",dp[b-a]);
	}
	
	return 0;
}