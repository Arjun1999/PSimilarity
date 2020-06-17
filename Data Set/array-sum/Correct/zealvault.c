#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,num,sum=0;
    int *m;
    scanf("%d",&n);
    //m=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&num);
        sum=sum+num;
    }
    /*for(i=0;i<n;i++)
    {
       sum=sum+m[i];
    }*/
    printf("%d",sum);
    return 0;
} 