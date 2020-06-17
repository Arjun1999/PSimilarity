#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int sum = 0,n,item;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&item);
        sum += item;
        n--;
    }
    
    printf("%d",sum);
    return 0;
}
