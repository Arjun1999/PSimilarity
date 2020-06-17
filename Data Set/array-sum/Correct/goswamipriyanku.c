#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  int a[1000],n,i,p=0; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        p=p+a[i];}
    printf("%d",p);
    

 
    return 0;
}
