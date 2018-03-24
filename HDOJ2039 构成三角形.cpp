#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	double a,b,c;
	int n;
	scanf("%d",&n);
	while(n--){
		int flag=1;
		scanf("%lf%lf%lf",&a,&b,&c);
		if(a<=0 || b<=0 || c<=0){
			flag=0;
		}
		if(a+b<=c || a+c<=b || b+c<=a){
			flag=0;
		}
		if(fabs(a-b)>=c || fabs(a-c)>=b || fabs(b-c)>=a){
			flag=0;
		}
		if(flag==1)	printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}