#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,c=0,j,i;
       scanf("%d",&a);
    int b[a];
    for(i=0;i<a;i++)
    scanf("%d",&b[i]);
    
    for(j=0;j<a;j++)
   { c=c+b[j];
   }
    printf("%d",c);
    return 0;
}
