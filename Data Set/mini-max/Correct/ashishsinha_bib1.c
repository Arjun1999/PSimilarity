#include<stdio.h>
int main() {
    int x;
    int i;
    scanf("%d",&x);
    long int max=x,min=x,sum=x;
    for (i=1;i<5;i++) {
        scanf("%d",&x);
        sum+=x;
        if (x<min) min=x;
        else if (x>max) max=x;
    }
    printf("%ld %ld",(sum-max),(sum-min));  
    return 0;
}