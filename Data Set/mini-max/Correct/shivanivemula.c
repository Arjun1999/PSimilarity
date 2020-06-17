#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    int i;
    long long int min,max,sum=0,flag=0;
    for(i=0;i<5;i++)
        {
            scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
                {
                    if(i!=j)
                        {
                            sum=sum+a[j];
                           
                    }
            }
             if(flag==0)
             {
                   max=sum;
                    min=sum;
                    flag=1;
            }
            else
                {
                    if(max<sum)
                        {
                            max=sum;
                    }
                    if(min>sum)
                        {
                            min=sum;
                    }
            }
        sum=0;
    }
    printf("%lld ",min);
    printf("%lld",max);
    return 0;
}
