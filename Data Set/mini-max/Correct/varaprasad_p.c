#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int i,j,k;
    unsigned long long s[5]={0},max=0,min=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(j=0;j<5;j++)
    {
    for(i=0;i<4;i++)
    {
        s[j]+=arr[i];
    }
      
      k=arr[j];
        arr[j]=arr[4];
        arr[4]=k;
    }
    max=s[0];
        min=s[0];
    for(i=0;i<5;i++)
    {
        if(min>s[i])
        {min=s[i];
        }

         if(max<s[i])
        {max=s[i];
        }

    }
    printf("%llu %llu ",min,max);
    return 0;
}
