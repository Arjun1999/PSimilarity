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
    scanf("%li %li %li %li %li",&a,&b,&c,&d,&e); 
    long int arr[5];
   arr[0]=a+b+c+d;
   arr[1]=a+c+d+e;
    arr[2]=a+b+c+e;
       arr[3]= a+b+d+e;
    arr[4] =b+c+d+e;
    long int max=arr[0];
    long int min=arr[0];
    for(int i=1;i<5;i++)
        {
            if(max<arr[i])
                max=arr[i];
            if(min>arr[i])
                min=arr[i];
    }
    printf("%li %li",min,max);
    return 0;
}
