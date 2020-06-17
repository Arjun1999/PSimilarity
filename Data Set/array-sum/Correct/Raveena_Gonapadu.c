#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum(int a[],int n)
{
    int i,z=0;
     for(i=0;i<n;i++)
     {
           z=a[i]+z; 
     }
    printf("%d",z);
}
int main() {
    int n,i;
    int a[1000];
    scanf("%d",&n);    
    //printf("\n");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    sum(a,n);
    return 0;
}
