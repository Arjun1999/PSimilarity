#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,t,n,j,sum=0;
         scanf("%d",&n);
         int arr[n];
         for(j=0;j<n;j++)
         {
           scanf("%d",&arr[j]);
           sum+=arr[j];
            
      }
       printf("%d\n",sum);

   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
