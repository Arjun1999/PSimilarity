#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int t[5],max,min;
    t[0]=b+c+d+e;
    t[1]=a+c+d+e;
    t[2]=a+b+d+e;
    t[3]=a+b+c+e;
    t[4]=a+b+c+d;
   max=t[0];min=t[0];
    for(int i=1;i<5;i++)
        {
        if(max<t[i]){
            max=t[i];
        }
        if(min>t[i]){
            min=t[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
