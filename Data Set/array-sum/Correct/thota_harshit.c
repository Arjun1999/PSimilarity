#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int *array;
    int index;
    int sum =0;
    int size;
    
    scanf(" %d",&size);
    
    array =calloc(size,sizeof(int));
    
    for(index =0;index<size;++index)
        scanf(" %d",&array[index]);
    
    for(index=0;index<size;++index)
        sum=sum+array[index];
    
    printf("%d",sum);
        


    return 0;
}
