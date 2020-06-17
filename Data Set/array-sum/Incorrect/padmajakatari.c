#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[20],sum=0,n,i;
    scanf("%d",&i);
    for(i=1;i<=11;i++)
    {
       scanf("%d",&a[i]);
        if(i>4&&i<10)
        continue;
        else
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
