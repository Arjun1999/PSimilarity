#include <stdio.h>
 
int sum(int arr[])
{
    int sum = 0; 
    int i;
 
    for (i = 0; i < 6; i++)
       sum +=  arr[i];
 
    return sum;
}
 
int main()
{
    int arr[6]={1,2,3,4,10,11};
    int i;
    
    for (i = 0; i < 6; i++)
        break;
 
    printf("Sum of the elements is %d", sum(arr));
    return 0;
}