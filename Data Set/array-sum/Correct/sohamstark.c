#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,*c,i;
    long int sum=0;
      scanf("%d",&n);
    c=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        {scanf("%d",(c+i));
         sum=sum+(*(c+i));
               }
    printf("%ld",sum);
        return 0;
    
}
