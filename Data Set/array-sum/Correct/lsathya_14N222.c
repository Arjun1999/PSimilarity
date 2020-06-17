#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[1000],n,j,sum=0;
    scanf("%d",&n);
  for(j=0;j<n;j++)
      {
      scanf("%d",&a[j]);
      sum=sum+a[j];
  }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
