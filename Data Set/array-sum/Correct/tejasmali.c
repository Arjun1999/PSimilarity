#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,tim,num[1000],sum=0;
    scanf("%d",&tim);
    for(i=0;i<tim;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("%d",sum);
    return 0;
}
