#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	int n,i,j,l,a,b,c,d;
	char s[51], t[7]={'~','!','@','#','$','%','^'};
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		l=strlen(s);
		a=b=c=d=0;
		if(l>=8 && l<=16){
			for(i=0;i<l;i++){
				if('a' <= s[i] && s[i] <= 'z')	a=1;
				if('A'<= s[i] && s[i] <= 'Z')	b=1;
				if('0' <= s[i] && s[i] <= '9')	c=1;
				for(j=0;j<7;j++){
					if(s[i]==t[j]){
						d=1;	break;
					}
				}
			}
			if(a+b+c+d >= 3){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}