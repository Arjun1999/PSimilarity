#include <stdio.h>


int main() {
    int n,i,sum=0,arr[10];
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
        {
             scanf("%d ",&arr[i]);
                 
        sum+=arr[i];

    }
    scanf("%d",&arr[n-1]);
    sum+=arr[n-1];
    printf("%d",sum);
   
    return 0;
}
