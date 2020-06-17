#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){ 
    long int a[5];
    int i,j,c;
    long int count1=0,count2=0;
    for(i=0;i<5;i++)
        {
    scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
        {
        for(j=0;j<4;j++)
            {
            if(a[j]>a[j+1])
                {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
        for(i=0;i<4;i++)
            {
            count1+=a[i];
        }
        printf("%lld ",count1);
        for(i=1;i<5;i++)
            {
            count2+=a[i];
        }
        printf("%lld ",count2);
    return 0;
}
