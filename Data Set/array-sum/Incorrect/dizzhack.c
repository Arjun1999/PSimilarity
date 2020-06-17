#include <stdio.h>

int main()
{
    int arr1[200],i,size,num;

    printf("Enter the size of the Array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter Array[%d]:",i);
        scanf("%d",&num);

    }
    int sum=0;
    for(i=0;i<size;i++)
    {
        sum= sum+ num;
    }

    printf("Sum = %d",sum);


    return 0;
}

