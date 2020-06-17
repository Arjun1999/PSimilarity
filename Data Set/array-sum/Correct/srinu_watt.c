#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
     int N;
    scanf("%d",&N);
    int arr[N] , i ,sum = 0;
    for (i=0; i<N ; i++)
      {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("%d", sum);
    return 0;
}
