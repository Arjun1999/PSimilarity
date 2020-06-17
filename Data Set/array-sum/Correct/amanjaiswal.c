#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num,i;
int *array;
long int sum=0;
   fscanf(stdin,"%d",&num);
    array = (int *)malloc(sizeof(int)*num);
    for(i=0;i<num;i++)
    fscanf(stdin,"%d",&array[i]);
    for(i=0;i<num;i++)
    sum = sum+array[i];

fprintf(stdout,"%ld",sum);
/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
