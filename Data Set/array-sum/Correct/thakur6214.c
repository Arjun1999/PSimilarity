#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int j;
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    int count=0;
    int i;
    int sum=0;
    for(i=0;i<n;i++)
        {   
        sum=sum+arr[i];
        count++;
        }
   // printf("%d\n",count);
     printf("%d\n",sum);
     
    return 0;
}
