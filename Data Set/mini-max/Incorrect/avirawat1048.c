#include<stdio.h>
int main()
{
    int a[5],temp,min,i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        min=a[i];
        if(a[i]+1>min){
            min=a[i]+1;
            temp=min;
            min=a[i]+1;
            a[i]+1=temp;}
    }
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
    
}