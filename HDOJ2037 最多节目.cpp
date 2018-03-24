#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>

using namespace std;

struct time{
	int start,end;
};

bool compare(time last, time next){
	return last.end < next.end;
}

int main(){
	freopen("input.txt","r",stdin);
	int n,i;
	time a[100];
	while(scanf("%d",&n) != EOF){
		if(n==0)	break;
		for(i=0;i<n;i++){
			scanf("%d%d\n",&a[i].start,&a[i].end);
		}
		sort(a,a+n,compare);
		int k=0,num=1;
		for(i=0;i<n;i++){
			if(a[i].start >= a[k].end){
				k=i;	num++;
			}
		}
		printf("%d\n",num);		
	}
	
	return 0;
}