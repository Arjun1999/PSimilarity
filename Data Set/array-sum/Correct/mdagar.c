#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
       { scanf("%d",&t);
         sum=sum+t;}
      printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
