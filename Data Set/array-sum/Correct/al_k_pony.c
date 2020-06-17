#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum,i,b;
int main() {
    scanf("%d",&b);
    int n[b];
    for(i = 0;i<b;i++) {scanf("%d",&n[i]);sum+=n[i];}
    printf("%d",sum);
    return 0;
}
