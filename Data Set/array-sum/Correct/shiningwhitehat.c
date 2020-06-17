#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int n;
scanf("%d",&n);
    
   int a[n]; 
    int i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    int sum=0;
   
    int j;
    for(j=0;j<n;j++)
        {
        sum=sum+a[j];
    }printf("%d",sum);
    return 0;
}
