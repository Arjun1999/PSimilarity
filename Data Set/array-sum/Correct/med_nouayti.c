#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N,i,res=0;
    scanf("%d\n",&N);
    int t[N];
    for(i=0;i<N;i++){
        scanf("%d ",&t[i]);
        res+=t[i];
    }
    printf("%d",res);
    return 0;
}
