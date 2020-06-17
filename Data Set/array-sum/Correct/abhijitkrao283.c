#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int size,i,sum=0;
    int array[1000]={0,};
    scanf("%d\n",&size);
    
    for(i=0;i < size;i++)
    {
        scanf("%d\n",&array[i]);
    }
    for(i=0;i < size;i++)
    {
        sum = sum + array[i];    
    }
    printf("%d",sum);
    return 0;
}
