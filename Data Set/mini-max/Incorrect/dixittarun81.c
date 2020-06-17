#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    { scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=1;i<=n;i++)
    {sum=sum+a[i];
    }
     
    int max = a[0];
    int min = a[0];
    for(i=1;i<=n;i++)
    {   
        if(a[i] > max)
    {   max = a[i];
    }
        if(a[i] < min)
        {   min = a[i];}
    }
    int x,y;
    x = sum-min;
    y = sum-max;
    printf("%d %d",y,x);
    return 0;
}
    


       
