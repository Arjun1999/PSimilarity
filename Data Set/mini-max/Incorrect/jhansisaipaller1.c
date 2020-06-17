#include<stdio.h>
int main()
{
    int a[1000],i,s1=0,s2=0;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    s1=s1+a[i];
    for(i=1;i<5;i++)
    s2=s2+a[i];
    printf("%d\t",s1);
    printf("%d",s2);
    return 0;
}
