#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int sum=0,no,num;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&no);
    
    while(no--)
        {
            scanf("%d",&num);
            sum=sum+num;
    }
    
    printf("%d",sum);
    return 0;
}
