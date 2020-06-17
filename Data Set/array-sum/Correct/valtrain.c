#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int addNumbers(int a, int b) 
{
  return a+b;
}

int main() 
{
  int t,i;
  scanf("%d",&t);
  int num1;
  int sum = 0; 
  for ( i = 0;i < t; i++ ) 
  {
    scanf("%d ",&num1);
    sum += num1;
    
  }
    printf("%d\n",sum);
  return 0;
}
