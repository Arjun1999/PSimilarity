#include<stdio.h>
int main()
{
    int i,a[5],s=0,p=0,c=0,b=0,f=0,big;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=1;i<5;i++)
        s=s+a[i];
    for(i=0;i!=2&&i<5;i++)
        p=p+a[i];
    for((i=0;i!=3&&i<5;i++)
        c=c+a[i];
    for(i=0;i!=4&&i<5;i++)
        b=b+a[i];
    for(i=0;i!=5&&i<5;i++)
        f=f+a[i];
    if(s>p&&s>c&&s>b&&s>f)
        big=s;
    else if(p>c&&p>b&&p>f)
        big=p;
    else if(c>b&&c>f)
        big=c;
    else if(b>f)
        big=b;
    else 
        big=f;
    printf("%d",big);
}
        
    