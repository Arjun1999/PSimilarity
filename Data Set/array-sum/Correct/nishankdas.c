#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
    {
    int i,t,a,sum=0;
       scanf("%d\n",&t);
    for(i=0;i<t;i++)
          {
            scanf("%d",&a);
            sum=sum+a;
          }
    printf("%d",sum);
    
        
    return 0;
}
