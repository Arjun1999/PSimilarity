#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int a[6]={1,2,3,4,10,11},i;  
for(i=0;i<=6;i++) 
{
    a[i+1]=a[i]+a[i+1];
}
return(a[i+1]);
}
    
    

