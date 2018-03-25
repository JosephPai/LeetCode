#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool judge(long long int a, long long int b){
	long long int c=0;
	int sum[1000];
	int i,k=0;
	for(i=2;i<a;i++){
		if(a%i == 0)	sum[k++]=i;
	}
	for(i=0;i<k;i++){
        c += sum[i];
	}
	return c+1==b;
}

int main(){
	freopen("input.txt","r",stdin);
	long long int a,b;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		if(judge(a,b) && judge(b,a))	printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}