#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,chk=1;
    unsigned long int *arr = malloc(sizeof(unsigned long int) * 5);
    for(int arr_i = 1; arr_i < 6; arr_i++){
       scanf("%lu",&arr[arr_i]);
    }
    
    while(chk>0)
    {
      chk = 0;
      //printf("+");
      for(i=1;i<6;i++)
      {
        //printf("===\n");
        if(arr[i]>arr[i+1])
        {
            j=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=j;
            chk++;
         }
      } 
    }
    
   
    
    printf("%lu", arr[1]+arr[2]+arr[3]+arr[4]);
  printf(" ");
  printf("%lu", arr[5]+arr[2]+arr[3]+arr[4]);
    
    return 0;
}
