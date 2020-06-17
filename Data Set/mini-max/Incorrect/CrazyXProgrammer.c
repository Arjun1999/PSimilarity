#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr[10];
    int i,n,j,a,b,c,d,e;
    scanf("%d",&n);
    for(i=0;i<4;i++)
        scanf("%d",&arr[i]);
    a=arr[0]+arr[1]+arr[2]+arr[4];
    b=arr[0]+arr[1]+arr[2]+arr[3];
    c=arr[4]+arr[1]+arr[2]+arr[3];
    d=arr[0]+arr[1]+arr[4]+arr[3];
    e=arr[0]+arr[4]+arr[2]+arr[3];
    
    
     if(a<b&&a<c&&a<d&&a<e)
    {
        printf("%d",a);
 
    }
    else if(b<a&&b<c&&b<d&&b<e)
    
        printf("%d",b);
       
    else if(c<b&&c<a&&c<d&&c<e)
        printf("%d",c);
   else if(d<b&&d<c&&d<a&&d<e)
        printf("%d",d);
    else if(e<b&&e<c&&e<d&&e<a)
        printf("%d",e);
    printf("\t");
    
    
    if(a>b&&a>c&&a>d&&a>e)
    {
        printf("%d",a);
 
    }
    else if(b>a&&b>c&&b>d&&b>e)
    
        printf("%d",b);
       
    else if(c>b&&c>a&&c>d&&c>e)
        printf("%d",c);
   else if(d>b&&d>c&&d>a&&d>e)
        printf("%d",d);
    else if(e>b&&e>c&&e>d&&e>a)
        printf("%d",e);
    
    return 0;
}