#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 1000
int main() {int a[SIZE];int n,sum=0,i;
           
            scanf("%d",&n);
           for(i=0;i<n;i++)
               {scanf("%d",&a[i]);}
            
             for(i=0;i<n;i++)
               {sum=sum+a[i];}
           printf("%d",sum);

     
    return 0;
}
