#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,i,sum=0,arr[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    for(i=0;i<n;i++)
        {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
 
}