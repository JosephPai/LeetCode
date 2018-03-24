#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>

int main(){
    int n,ah,am,as,bh,bm,bs;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d%d%d%d",&ah,&am,&as,&bh,&bm,&bs);
        as += bs;
        am += bm;
        ah += bh;
        am += as/60; as %= 60;
        ah += am/60; am %= 60;
        printf("%d %d %d\n",ah,am,as);
    }
    
    return 0;
}