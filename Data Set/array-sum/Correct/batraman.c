#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num,sum=0,temp;
    scanf("%d",&num);
    while(num--)
        {
        scanf("%d",&temp);
            sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
