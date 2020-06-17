#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],b[5],s=0,c=4,max=0,min=0,i,j;
    for(int i=0;i<5;i++)
    scanf("%ld",&a[i]);
    for(j=0;j<5;j++)
        {
    for(int i=0;i<5;i++)
        {
        if(i==c)
            continue;
        else
            s=s+a[i];
        }
        b[j]=s;
        s=0;
        c=c-1;
    }
    min=b[0];
    for(i=0;i<5;i++)
        {
            if(max<b[i])
                max=b[i];
            if(min>b[i])
                min=b[i];
        }
    printf("%ld %ld",min,max);
    return 0;
}
