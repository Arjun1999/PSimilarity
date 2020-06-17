#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        sum+=arr[i];
    printf("%d\n",sum);
    return 0;
}
