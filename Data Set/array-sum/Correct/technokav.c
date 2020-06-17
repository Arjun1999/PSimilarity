#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[1000],i,num1,sum=0;
int main() {
scanf("%d",&num1);
    for(i=0;i<num1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<num1;i++)
       { 
       sum = sum + a[i];
       }
    printf("\%d",sum);
  return 0;
}
