#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i =0;i<n;i++){
        int x;
        scanf("%d",&x);
        count += x;
    }
    printf("%d",count);
    return 0;
}
