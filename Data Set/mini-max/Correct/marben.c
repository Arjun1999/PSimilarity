#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sort(long int *arr)
    {
    bool swap=true;
    int long temp;
    while(swap)
        {
        swap=false;
       for (int i=0;i<4;i++)
           {
           if(arr[i]>arr[i+1])
                {           
               temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
               swap=true;
                }
       }
        
    }
    
}
int main(){
    long int arr[5];
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    sort(arr);
    printf("%ld %ld",arr[0]+arr[1]+arr[2]+arr[3],arr[4]+arr[3]+arr[2]+arr[1]);
    return 0;
}
