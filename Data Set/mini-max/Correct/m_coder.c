#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int arr[5]; 
    long int temp; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    for(int i=0;i<5;i++)
        {for(int j=i+1;j<5;j++)
        {if (arr[i]>arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
            
        }
        
    }
    for(int i=1;i<4;i++)
        {e+=arr[i];}
    c=e+arr[0];
    d=e+arr[4];
    printf("%ld %ld",c,d);
    return 0;
}
