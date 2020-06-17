#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,a[1000],i,x,sum=0;
        scanf("%d",&n);
   // printf("\n");
    for(i=0;i<n;i++)
       { 
        scanf("%d",&a[i]);
      //  printf(" ");
               sum+=a[i];
    }
    /*for(x=0;x<n;x++)
    {
        sum=sum+a[x];
    }*/
    printf("%d",sum);
   
    return 0;
}
