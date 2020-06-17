#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeSecond(int a, int b) {
  return a+b;
}
int main() {
  int t,i;
  int num1;
  int sum = 0; 
  scanf("%d",&t);
    if(t >0 && t< 1001){
        for ( i = 0;i < t; i++ ) {
        scanf("%d",&num1);
        sum = solveMeSecond(num1,sum);
        }
        printf("%d\n",sum);
    }
    else return 0;
  return 0;
}