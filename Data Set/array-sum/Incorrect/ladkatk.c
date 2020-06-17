#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int sum=0;
    int arr[20];
  
    scanf("%d",&n);
    for(int m=0;m<n;m++)
    {
        
        scanf("%d",&arr[m]);
        sum=sum+arr[m];
    }
        printf("%d",sum);
    
    
    
    return 0;
}
