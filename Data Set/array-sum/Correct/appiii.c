#include <stdio.h>
int main() {
            int t,i,a;
    long int sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%ld",sum);
    return 0;
}
