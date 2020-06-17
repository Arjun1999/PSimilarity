#include<stdio.h>
int main()
{
    long int a[5],max,min,b=0;
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(int i=0;i<5;i++){
    b=b+a[i];
        max=(max>a[i]?max:a[i]);
        min=(min<a[i]?min:a[i]);
    }
    max=b-max;
    min=b-min;
    printf("%ld %ld",max,min);
    
}