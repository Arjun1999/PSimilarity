#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum,num,test,i;
    scanf("%d\n",&test);
    sum=0;
    for(i=0;i<test;i++)
        {
        scanf("%d ",&num);
        sum=sum+num;
    }
    printf("%d\n",sum);
    return 0;
}
