#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   scanf("%d",&n);
   int arr[n];
    int i;
    
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
        
    }
    int s=0;
    
    for(i=0;i<n;i++){
        s=s+arr[i];
    }
    printf("%d\n",s);
    return 0;
}
