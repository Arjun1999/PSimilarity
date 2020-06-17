#include<stdio.h>
int main()
{
    int a[4];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<5;i++)
    {
        if(a[i]<a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=a[i];
        }   
    }
}                                                                                               