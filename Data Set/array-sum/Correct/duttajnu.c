#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int count;
    scanf("%d",&count);
    int sum=0,num=0,i=0;
    for(;i<count;++i)
        {
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
