#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],sum=0,sum2=0,temp;
    int i,j;
    for(i=0;i<5;i++)
       { scanf("%ld",&a[i]);
       }
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
    }
    for(i=0;i<4;i++)
    {sum+=a[i];sum2+=a[i+1];}
    printf("%ld %ld",sum,sum2);
    
    return 0;
}
