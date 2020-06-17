#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int i,sum=0,k;
    for(i=0;i<n;i++)
        {
           scanf("%d ",&k);
           sum=sum+k;
        }
    printf("%d",sum);
}
