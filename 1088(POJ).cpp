#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution: http://poj.org/showmessage?message_id=113914
// 递归下的记忆化搜索

using namespace std;
int m,n;
int h[100][100],dp[100][100];
int DP(int i, int j){
	if(dp[i][j]>0)	return dp[i][j];
	int max=0;
	if(j-1 >= 0){
		if(h[i][j-1] < h[i][j]){
			if (max < DP(i,j-1)){
				max = DP(i,j-1);
			}
		}
	}
	if(j+1 < n){
		if(h[i][j+1] < h[i][j]){
			if (max < DP(i,j+1)){
				max = DP(i,j+1);
			}
		}
	}
	if(i-1 >= 0){
		if(h[i-1][j] < h[i][j]){
			if(max < DP(i-1,j)){
				max = DP(i-1,j);
			}
		}
	}
	if(i+1 < m){
		if(h[i+1][j] < h[i][j]){
			if(max < DP(i+1,j)){
				max = DP(i+1,j);
			}
		}
	}
	return dp[i][j] = max+1;
}
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++){
			scanf("%d",&h[i][j]);
			dp[i][j]=0;
		}
	int max=0;
	for(int i=0;i<m;i++){
		for(int j=0; j<n; j++){
			DP(i,j);
			if(max < dp[i][j]){
				max = dp[i][j];
			}
		}
	}
	printf("%d",max);
	return 0;
}

