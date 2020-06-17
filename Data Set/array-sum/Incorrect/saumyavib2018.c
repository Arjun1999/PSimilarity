#include<stdio.h>
#include<stdlib.h>
int arraysum(int my_array[],int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + my_array[i];
    }
    return sum;
}
int main()
{
    int a,size,array[size];
    int sum_of_your_array;
    printf("Enter the size of your array :\n");
    scanf("%d",&size);
    printf("Now enter the elements in your array:\n");
    for(a=0;a<size;a++)
    {
        printf("ARRAY[%d] :\n",a);
        scanf("%d",&array[a]);
    }
    sum_of_your_array = arraysum(array[size],size);
    printf("The sum of your array elements is : %d",sum_of_your_array);
}