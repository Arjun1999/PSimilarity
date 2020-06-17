#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 1000
int main() {
 int a[N],i,n,sum;
    scanf("%d",&n);
     for(i=0;i<n;i++)
         if(i==0)
         {scanf("%d",&a[i]);
          sum=a[i];}
     else if(getchar()==' ')
         {
         scanf("%d",&a[i]);
         sum=sum+a[i];
     }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
