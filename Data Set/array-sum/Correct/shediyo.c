#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arrSize=0,sum=0,i,current;
    scanf("%d",&arrSize);
    for(i=0;i<arrSize;i++)
    {
        scanf("%d",&current);
        sum+=current;
    }
    printf("%d",sum);
    return 0;
}
