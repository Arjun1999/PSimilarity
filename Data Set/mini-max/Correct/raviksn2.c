#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long long int s[5];
    long long int temp;
    int i,j;
    for(i=0;i<5;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<5;i++)
        {s[i]=0;
        for(j=0;j<5;j++)
        {
            if(j==i);
                else
              s[i]=s[i]+a[j];
        }
        }
        for(i=0;i<4;i++)
            {if(s[i]<s[i+1])
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
    printf("%lld",s[4]);
     for(i=0;i<4;i++)
            {if(s[i]>s[i+1])
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
    printf(" %lld",s[4]);
    return 0;

}