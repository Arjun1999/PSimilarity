#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,re=0,s;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%d",&s);
        re+=s;
    }
    printf("%d",re);
    return 0;
}
