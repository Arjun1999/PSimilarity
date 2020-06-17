#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]){
  int n = 5;
  int i;
  long int sum = 0;
  long int min = LONG_MAX;
  long int max = -1;
  for(i = 0; i < n; i++){
    long int in;
    scanf("%li",&in);
    sum += in;
    if(in < min){
      min = in;
    }
    if(in > max){
      max = in;
    }
  }
  printf("%li %li",sum-max, sum-min);
  return 0;
}