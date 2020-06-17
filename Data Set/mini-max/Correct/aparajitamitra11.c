#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
 long arr[5];
    long p;
    for (int i=0;i<5;i++)
        scanf("%ld",&arr[i]);
    for(int j=4;j>=0;j--)
        {
        for(int k=0;k<j;k++)
            {
            if(arr[k]>arr[k+1])
              { p=arr[k+1];
                arr[k+1]=arr[k];
            arr[k]=p;
        }
        }
    }
    printf("%ld %ld",(arr[0]+arr[1]+arr[2]+arr[3]),(arr[1]+arr[2]+arr[3]+arr[4]));
    return 0;
}
