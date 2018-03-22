#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

int main(){
	freopen("input.txt", "r", stdin);
	int n,i,count;
	char s[1000],c;
	scanf("%d\n", &n);
	while(n--){
		count = i = 0;
		gets(s);
		for(i=0;i<strlen(s);i++){
			if(s[i] < 0)	count++;
		}
		printf("%d\n",count/2);
		memset(s,'\0',sizeof(s));
	}
	
	return 0;
}