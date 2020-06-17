#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,num,sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d",sum);
    return 0;
}
