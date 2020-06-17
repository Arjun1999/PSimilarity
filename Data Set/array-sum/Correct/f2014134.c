#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int x,y,i;
    int s=0;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
        {
        scanf("%d",&a[i]);
    }
    for(y=0;y<x;y++)
        {
         s=s+a[y];}
    
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
