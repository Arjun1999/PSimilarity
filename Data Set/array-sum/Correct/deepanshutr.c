#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,temp,sum=0;
    for(scanf("%d",&i);i>0;i--)
        {
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
