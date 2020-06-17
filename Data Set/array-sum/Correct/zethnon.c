#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,i,count=0;
    scanf("%d",&a);
    int v[a];
    for(i=0;i<a;i++)
        {
        scanf("%d",&v[i]);
    }
    for(i=0;i<a;i++){
        count = count + v[i];
   }
    printf("%d",count);
    
    return 0;
}
