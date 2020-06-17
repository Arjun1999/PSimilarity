#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T,num,sum=0;
    scanf("%d",&T);
    while(T--)
        {scanf("%d",&num);sum+=num;}
    printf("%d\n",sum);
    return 0;
}
