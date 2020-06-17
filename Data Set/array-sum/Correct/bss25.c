#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i=0,a[1000];
    int size=0,sum=0,val;
    scanf("%d",&size);
    if(size>=1 || size<=1000)
        {
        for(i=0;i<size;i++)
            {
            scanf("%d",&val);
            if(val>=0 ||val<=1000)
                a[i]=val;
            else printf("value out of range");
        }
    }
    for(i=0;i<size;i++)
        {
        sum+=a[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
