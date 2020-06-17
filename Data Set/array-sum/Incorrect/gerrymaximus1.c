#include <stdio.h>
int main() 
{
  int n=6;
  int sum = 0, i;
  //printf("enter the size of array:\n");
  //scanf("%d", &n);
  int ar[6]={1,2,3,4,10,11};
 // printf("enter %d element:", n);
  //for (i = 0; i < n; i++)
    //scanf("%d", &ar[i]);*/
  for (i = 0; i < 6; i++) {
    sum = sum + ar[i];
  }
  printf("sum=%d", sum);
  return 0;
}
