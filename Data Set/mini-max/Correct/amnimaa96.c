#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int sum(long int arr[5],int j)
    {
    long int sum=0;
        for(int k=0;k<5;k++)
            {
            if(k==j)
                continue;
            sum=sum+arr[k];
        }
    return(sum);
}
int main(){
    long int arr[5],j=0,help[5],max,min;
    for(int i=0;i<5;i++)
    scanf("%ld",&arr[i]);
    while(j<5)
    {
       help[j]=sum(arr,j);
        j++;
    }
    max=help[0];
    min=help[0];
    for(int i=1;i<5;i++)
    {
        if(max<help[i])
          max=help[i];
        if(min>help[i])
          min=help[i];
    }
     printf("%ld %ld",min,max);   
    return 0;
}
