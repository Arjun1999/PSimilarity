#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n,i,a[1000],sum=0;
int main(void) 
    {
    
    scanf("%d", &n);
   
    if(n>1000 || n<1)
        {
        exit(5);
    }
    
    for(i=0;i<n;i++)
        {
        scanf("%d", &a[i]);
        if (a[i]>1000 || a[i]<0)
        {
        exit(6);
        }
    }
    
    
    for(i=0;i<n;i++)
        {
        sum= sum+ a[i];
    }
    printf("%d", sum);
    return 0;
}
