#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int l;
        scanf("%d",&l);
        sum+=l;
    }
    printf("%d",sum);
    return 0;
}
