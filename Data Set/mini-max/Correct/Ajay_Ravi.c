#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a,b,c,d,e,min=0,max=0,sum=0; 
    int i,j;
    scanf("%llu %llu %llu %llu %llu",&a,&b,&c,&d,&e);
    unsigned long long int arr[5]={*(&a),*(&b),*(&c),*(&d),*(&e)};
     /*printf("Before sorting:\n");
    for(i=0;i<5;i++)
        printf("%llu ",arr[i]);*/
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(arr[i]>arr[j])
                {
                //printf("arr[%d]>arr[%d]",i,j);
               unsigned long long int t;
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
   /* printf("After sorting:\n");
    for(i=0;i<5;i++)
        printf("%llu ",arr[i]);*/
    for(i=0;i<5;i++)
        sum+=arr[i];
    min=sum-arr[4];
    max=sum-arr[0];
    printf("%llu %llu",min,max);
    return 0;
}
