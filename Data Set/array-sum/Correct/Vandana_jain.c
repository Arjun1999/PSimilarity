#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(unsigned int arr[],unsigned int n)
           {
             int s=0,i;
               for(i=0;i<n;i++)
                   {
                   s=s+arr[i];
                   }
                return s;
           }
int main() {

    unsigned int n,i;
    scanf("%d",&n);
    int a[n];
      for(i=0;i<n;i++)
          {
             scanf("%d",&a[i]);
          }
    printf("%d",sum(a,n));
    return 0;
}
