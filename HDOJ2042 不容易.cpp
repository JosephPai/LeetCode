#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	int n,a;
	scanf("%d",&n);
	while(n--){
		int s=3;
		scanf("%d",&a);
		for(int i=0;i<a;i++){
			s = 2*(s-1);
		}
		printf("%d\n",s);
	}
	
	return 0;
}