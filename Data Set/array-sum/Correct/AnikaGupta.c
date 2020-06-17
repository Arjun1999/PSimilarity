#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    int i = 0;
     int arr[1000];
    int sum = 0;
    for(i=0;i<num;i++)
    {
        scanf("%d \t",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);
      
    return 0;
}
