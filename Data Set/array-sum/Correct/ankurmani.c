#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b[1000],r=0;
    scanf("%d\n",&a);
    for(int i=0;i<=a;i++)
        {
        scanf("%d\n",&b[i]);
    }
    for(int j=0;j<=a;j++)
        {
        
        r=r+b[j];
    }
    printf("%d\n",r);
    return 0;
}
