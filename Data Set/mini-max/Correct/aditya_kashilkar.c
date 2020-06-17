#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void mergeSort(long long int arr[],int n, int min, long long int array[])
{
    int mid=min+(n-min)/2;
    if(n-min>1)
    {
        mergeSort(arr,mid,min,array);
        mergeSort(arr,n,mid,array);
    }
    int i=min,j=mid,k;
    for(k=min;k<n;k++)
    {
        if(i<mid&&j<n)
        {
            if(arr[i]<=arr[j])
            {
                array[k]=arr[i];
                i++;
            }
            else
            {
                array[k]=arr[j];
                j++;
            }
        }
        else if(i>=mid)
        {
            array[k]=arr[j];
            j++;
        }
        else
        {
            array[k]=arr[i];
            i++;
        }
    }
    for(k=min;k<n;k++)
    arr[k]=array[k];
    
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum=a+b+c+d+e;
    long long int arr[5],array[5];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    mergeSort(arr,5,0,array);
    printf("%lld %lld\n",sum-arr[4],sum-arr[0]);
    return 0;
}
