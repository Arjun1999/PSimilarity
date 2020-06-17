#include<stdio.h>
int arr[50];
int n;
int sumarr(int arr[], int n)
{
    int i,t=0;
    for(i=0;i<n;i++)
    {
        t = t+arr[i];

    }

    return t;
}

int main()
{
    int s,j;
    int sum;
    printf("\nenter the no.");
    scanf("%d",&s);
    printf("enter the elements");
    for(j=0;j<s;j++)
    {
        scanf("%d",&arr[j]);
    }
    sum = sumarr(arr, s);
    return sum;
}
