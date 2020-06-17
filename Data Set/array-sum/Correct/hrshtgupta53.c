#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[1000];
    int i,d,s=0;
     scanf("%d",&d);
    for(i=0;i<d;i++)
        {
        scanf("%d",&a[i]);
        s=s+a[i];
       }
    printf("%d",s);
    return 0;
}
