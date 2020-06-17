#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long int maxsum=0,sum1,k;
    for(int i=0;i<5;i++)
        scanf(" %ld",&a[i]);
    for(int i=0;i<5;i++){
        sum1=0;
        for(int j=0;j<4;j++)
            sum1+=a[j];
        if(sum1>maxsum)
            maxsum=sum1;
        int temp=a[0];
        for(k=0;k<4;k++)
            a[k]=a[k+1];
        a[k]=temp;
    }
    long int res1=maxsum;
    for(int i=0;i<5;i++){
        long int sum1=0;
        for(int j=0;j<4;j++)
            sum1+=a[j];
        if(sum1<maxsum)
            maxsum=sum1;
        int temp=a[0];
        for(k=0;k<4;k++)
            a[k]=a[k+1];
        a[k]=temp;
    }
    printf("%ld ",maxsum);
    printf("%ld",res1);
    return 0;
}
