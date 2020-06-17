#include <stdio.h>
int main() {
   int size,i;
    long int sum=0;
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld",sum);
    return 0;
}
