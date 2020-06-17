#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[20],min,max;
    int i,j,temp;
    for(i=0;i<5;i++)
        {scanf("%lld",&a[i]);}
    for(i=0;i<5;i++)
        {for(j=0;j<4-i;j++)
            { if(a[j]>a[j+1])
                {temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
                
            }
              }
                      }
    min=a[0]+a[1]+a[2]+a[3];
    max=a[1]+a[2]+a[3]+a[4];
    printf("%lld %lld",min,max);
    
    return 0;
}
