#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
           int size,c=0,i;
        scanf("%d",&size);
           int a[size];
        for(i=0;i<size;i++)
            {
            scanf("%d",&a[i]);
            c+=a[i];
        }
    printf("%d",c);
    return 0;
}
