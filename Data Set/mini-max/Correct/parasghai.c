#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    long int arr[5]={a,b,c,d,e};
    for(int j=1;j<=4;j++)
        {
    for(int i=0;i<=3;i++)
        {
        if(arr[i]>arr[i+1])
            {
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
             }
        }
    }
   printf("%ld %ld",arr[0]+arr[1]+arr[2]+arr[3],arr[4]+arr[1]+arr[2]+arr[3] ) ;
    return 0;
}
