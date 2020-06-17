#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void mergesort(unsigned long long int a[],unsigned long long int i,unsigned long long int j);
    void merge(unsigned long long int a[],unsigned long long int i1,unsigned long long int j1,unsigned long long int i2,unsigned long long int j2);
     
    void mergesort(unsigned long long int a[],unsigned long long int i,unsigned long long int j)
    {
        int mid;
        if(i<j)
        {
            mid=(i+j)/2;
            mergesort(a,i,mid);        
            mergesort(a,mid+1,j);    
            merge(a,i,mid,mid+1,j);    
        }
    }
     
    void merge(unsigned long long int a[],unsigned long long int i1,unsigned long long int j1,unsigned long long int i2,unsigned long long int j2)
    {
        int temp[200000];  
        int i,j,k;
        i=i1;    
        j=i2;   
        k=0;
        while(i<=j1 && j<=j2)    
        {
            if(a[i]<a[j])
                temp[k++]=a[i++];
            else
                temp[k++]=a[j++];
        }
        
        while(i<=j1)    
            temp[k++]=a[i++];
            
        while(j<=j2)    
            temp[k++]=a[j++];
            
        for(i=i1,j=0;i<=j2;i++,j++)
            a[i]=temp[j];
    }
int main() {
    unsigned long long int *arr = malloc(sizeof(unsigned long long int) * 5);
    for(unsigned long long int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%llu",&arr[arr_i]);
    }
    mergesort(arr,0,4);
   unsigned long long int min=0,max=0;
    for(int arr_i = 0; arr_i < 4; arr_i++){
       min+=arr[arr_i];
    }
    for(int arr_i = 1; arr_i < 5; arr_i++){
       max+=arr[arr_i];
    }
    printf("%llu %llu",min,max);
    
    return 0;
}
