#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int rr[5],smn=0,smx=0,mx=0,mn=999999999; 
    for(int i=0;i<5;i++){
        scanf("%ld",&rr[i]);
        if(rr[i]>mx)
            mx=rr[i];
        if(rr[i]<mn)
            mn=rr[i];
        smx+=rr[i];}
    printf("%ld %ld",smx-mx,smx-mn);
    return 0;
}
