#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,num;
    int total = 0;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        int number;
        scanf("%d",&number);
        total += number;
    }
    printf("%d",total);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
