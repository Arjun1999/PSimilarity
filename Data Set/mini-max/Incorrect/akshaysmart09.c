#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int a[100],i,b[100],max,min,s=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++){
        max = a[0];
        if(a[i]>max){
            max = a[i];
        }
        
        for(i=0;i<5;i++){
        min = a[0];
        if(a[i]>max){
            max = a[i];
        }
        
    }
    
   
}
