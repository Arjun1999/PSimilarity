#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,tmp,sum=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
     scanf("%d",&tmp);
     sum+=tmp;
    }
    printf("%d",sum);
    return 0;
}
