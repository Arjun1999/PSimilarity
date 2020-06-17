#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int num_of_inputs ;
    scanf("%d",&num_of_inputs);
    int i , num , sum=0; 
    for (i=0;i<num_of_inputs ; i++)
{ scanf("%d",&num);
    sum=sum+num;
}
    printf("%d",sum);
    return 0;
}
