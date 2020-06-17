#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],i,b,c,sum=0;
    scanf("%d",&b);
    for(c=b,i=0;c>0;c--)
        {
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0;i<b;i++)
        {
        sum=sum+a[i];}
    
        printf("%d",sum);

    
    
    return 0;
}
