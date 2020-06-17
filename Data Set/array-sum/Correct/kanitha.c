#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int number,sum,i,no;
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        scanf("%d",&no);
        sum=sum+no;
    }
    printf("%d",sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
