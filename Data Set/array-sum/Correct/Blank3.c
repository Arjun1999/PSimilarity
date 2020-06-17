#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int length,i;
    scanf("%d",&length);
    int sum=0,num;
    for(i=0;i<length;i++)
        {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
