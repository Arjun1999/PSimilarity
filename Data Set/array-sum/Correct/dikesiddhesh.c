#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arnum[1000];
    int i,num,sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {
        scanf("%d",&arnum[i]);
        sum=sum+arnum[i];
        }
     printf("%d",sum);
    return 0;
}
