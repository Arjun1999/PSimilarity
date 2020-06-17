#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int sum_of_array_elements(int *int_array,int size)
    {
    int i=0;
    int sum=0;
    for(i=0;i<size;i++)
        {
        sum+=int_array[i];
    }
    return sum;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size;
    
    scanf("%d",&size);
    
    int i;
    int *int_array = (int*)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
        scanf("%d",int_array+i);
    
    printf("%d",sum_of_array_elements(int_array,size));
    return 0;
}
