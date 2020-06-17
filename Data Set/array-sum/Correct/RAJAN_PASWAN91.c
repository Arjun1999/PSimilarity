#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,array[1001],sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;)
        {
      
scanf("%d",&array[i]);
      if(array[i]>=0&&array[i]<=1000)
      {
          sum=sum+array[i];
    i++;
      }
    }
    printf("%d",sum);
    return 0;
}
