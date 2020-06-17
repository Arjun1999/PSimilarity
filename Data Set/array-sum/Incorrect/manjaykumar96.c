#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6]={1,2,3,4,10,11};
    int i;
    int sum=0;
  for(i=0;i<6;i++){
   sum=sum+arr[i];
    }
    printf("%d\n",sum);

    return 0;}