#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void sort(long int *arr,int n){
    long int temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   // return arr;
}
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
   // return 0;
    long int arr[5];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
     long int temp;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
       // for(int i=0;i<5;i++){printf("\n%ld",arr[i]);}

    long int min=0;
    for(int i=0;i<4;i++){
        min=min+arr[i];
    }
    long int max=0;
    for(int i=4;i>0;i--){
        max=max+arr[i];
    }
   // for(int i=0;i<5;i++){printf("\n%ld",arr[i]);}
    printf("%ld %ld",min,max);
    
}
