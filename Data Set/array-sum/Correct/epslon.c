#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,sum=0,num=0;
    
    scanf("%d\n",&N);
    for(int i=0;i<N-1;i++)
    {
        scanf("%d ",&num);
        sum = sum+num;
    }
    scanf("%d",&num);
    sum+=num;
    printf("%d",sum);
    return 0;
}
