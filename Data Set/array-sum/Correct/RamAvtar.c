#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i;
    int Sum=0;
    scanf("%d\n",&N);
    int arr[N];
   for(i=0;i<N;i++)
       {
       scanf("%d ",&arr[i]);
   }
    for(i=0;i<N;i++)
        {
        Sum=Sum+arr[i];
    }
  printf("%d",Sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
