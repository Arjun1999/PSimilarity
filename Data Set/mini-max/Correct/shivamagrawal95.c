#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int temp=0,sum1=0,sum2=0,a[10];
    int i,j;
    for(i=0;i<5;i++)
        scanf("%li",&a[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
    {sum1=sum1+a[i];
    }
for(i=1;i<5;i++)
{
    sum2=sum2+a[i];
}
    printf("%li %li",sum1,sum2);
    
    return 0;
}
