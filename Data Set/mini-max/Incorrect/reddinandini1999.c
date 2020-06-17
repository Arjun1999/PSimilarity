#include<stdio.h>
void minmax(int []);
int main()
{
  int arr[5], i;
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    minmax(arr);
}

void minmax(int arr[5])
{
    int i,j,k,max=0,min=0,sum,maximum,minimum;
    static int arr1[5],arr2[5];
    for(i=0;i<5;i++)
    arr1[i]=arr[i];
    arr2[i]=arr[i];
        for(j=1;j<5;j++)
        {
        if(arr2[j]>arr2[0])
        k=arr2[0];
        arr2[0]=arr2[j];
        arr2[j]=k;
        }
        max=arr2[0];
        for(j=1;j<5;j++)
        {
            if(arr1[j]<arr1[0])
            k=arr1[0];
            arr1[0]=arr1[j];
            arr1[j]=k;

        }
        min=arr1[0];
    for(i=0;i<5;i++)
    sum=sum+arr[i];
    maximum=sum-min;
    minimum=sum-max;
    printf("%d %d",maximum,minimum);
    
}

