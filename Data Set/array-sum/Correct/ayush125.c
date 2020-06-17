#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);
        return 0;
}
