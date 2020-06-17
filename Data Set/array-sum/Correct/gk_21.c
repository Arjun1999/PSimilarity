#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x,i,j;
    long int input=0;
    long int result=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%lu",&input);
        result=result+input;
    }
    
    printf("%lu",result);
    return 0;
}
