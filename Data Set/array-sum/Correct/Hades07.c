#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        int t;
        scanf("%d",&t);
        int a,i=0,s=0;
        while(i<t)
        {
            scanf("%d",&a);
            s+=a;
            i++;
        }
        printf("%d",s);
        return 0;
}
