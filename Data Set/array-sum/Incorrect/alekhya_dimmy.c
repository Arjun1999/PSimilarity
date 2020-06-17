#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
 

  

int main(){
   int n=6;
        int i,sum=0;
    scanf("%d",&n);
    int arr[10] ={1,2,3,4,10,11};
    

    for (i=0;i<n;i++){
     scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
   printf("%d" ,sum);
  
    return 0;
}
