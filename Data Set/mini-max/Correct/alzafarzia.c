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
    long int arr[]={a,b,c,d,e};
    long int sum =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    long int result[n];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j] && arr[i] != arr[j+1])
                sum = sum;
            else
                sum = sum + arr[j];
        }
        result[i] = sum;
        sum = 0;
    }
    for(int k=0;k<n;k++)
    {
        for(int p=0;p<n-1;p++)
        {
            if(result[p]>result[p+1])
            {
                long int temp = result[p+1];
                result[p+1] = result[p];
                result[p] = temp;
            }
        }
    }
    printf("%ld %ld",result[0],result[4]);

    return 0;
}
