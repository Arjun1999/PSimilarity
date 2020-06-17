#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int add(int a,int sum)
    {
      sum=sum+a;
      return sum;
}
int main() {
     int n,i,x,z=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
         {
           scanf("%d",&x);
           z=add(x,z);
     }
     printf("%d",z);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
