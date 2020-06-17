#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int max=0,i,min=0;
    int *arr = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
        min=min+arr[i];
        }
    for(i=0;i<5;i++)
    {
        long int sum=0;
            for(int j=0;j<5;j++){
                if(j==i)
                    continue;
                else
                    sum=sum+arr[j];
            }

        min=(sum<min?sum:min);
        max=(sum>max?sum:max);
    }
    printf("%ld %ld",min,max);
    
    
    return 0;
}
