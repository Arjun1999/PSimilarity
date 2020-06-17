#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int spread,sum,summer,i;

    scanf("%d\n",&spread);
    
    while(i < spread)
        {
        scanf("%d",&summer);
        sum += summer;
        i++;
    }
        printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
