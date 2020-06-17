#include <assert.h>
#include <limits.h>
#include <math.h>

#include <stdio.h>


int main() {
    /*
     * Write your code here.
     */
     int n,sum=0,c,value;
     printf("enter array size");
     scanf("%d",&n);
     printf("enter%dintegers\n",n);
     for(c=1;c<=n;c++)
      {
        scanf("%d",&value);
        sum=sum+value;
      }
printf("sum of integers=%d\n",sum);
return 0;
}


   
