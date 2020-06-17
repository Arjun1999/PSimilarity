#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int arr[1000];
 int i,n,sum=0;
    scanf("%d",&n);
    if(1<= n && n<=1000)
      {
        for(i=0;i<=n;i++)
        {
        scanf("%d",&arr[i]);
        
        }
     
    for(i=0;i<=n;i++)
        {
        
        sum=sum+arr[i];
       }
    printf("%d",sum);
    
}
}