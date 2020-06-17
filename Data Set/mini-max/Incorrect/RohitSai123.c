#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int s=0,j=0,k,w,i,b[10],q;
    while(j<5)
    {
        s=0;
        for(i=0;i<5;i++)
        {
            if(i==j)
            {
                s=s+0;
            }
            else
            {
                s=s+arr[i];
            }
        }
            b[j]=s;
        j++;
    }
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            if(b[j+1]>b[j])
            {
                k=b[j+1];
                b[j+1]=b[j];
                b[j]=k;
            }
        }
    q=b[4];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(b[j+1]<b[j])
            {
                w=b[j+1];
                b[j+1]=b[j];
                b[j]=w;
            }
                
}
        
    }
    w=b[0];
    printf("%d %d",w,k);
    
    // Complete this function
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
