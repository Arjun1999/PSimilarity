#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,i,sum=0,arr[5000];
   scanf("%d",&num);
    
    for(i=0;i<num;i++)
        {
        scanf("%d",&arr[i]);
        sum = sum +arr[i];
    }
   
    
 printf("%d",sum);
}
