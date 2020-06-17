#include<stdio.h>
int main ()
{
    int i,a,c=0;
    int b[a];
    scanf("%d",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",b[i]);
    }
    for(i=0;i<a;i++)
    {
        c=c+b[i];
    }
    printf("%d",c);
}
