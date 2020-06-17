#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int sum1=0,sum2=0;
    int i,j,tmp;
    for(i=1;i<5;+i++)
    { for(j=i;j>=0;j--)
    { if(arr[j]<arr[j-1])
    { tmp=arr[j];
     arr[j]=arr[j-1];
     arr[j-1]=tmp;
    }
    }
    }
    for(i=0;i<5;i++)
    { if(i>0)
        sum1+=arr[i];
     if(i<4)
         sum2+=arr[i];
    }
    printf("%ld\t%ld",sum2,sum1);
    return 0;
}
