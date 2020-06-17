#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int n,i,sum,num;
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&num);
        sum=sum+num;
    }
      printf("%d",sum);  
    return 0;
}
