#include<stdio.h>
main()
{
    int i,j=0,k,l,a,c[100],b[20],m=0,n,t=0,r,d=0,h=0,x;
    scanf("%d",&x);
    for(a=1;a<=1000;a++)
    {
        n=a;
    for(i=1;a>0;i++)
    {
        m=m+1;
        b[m]=a%10;
        k=a-b[m];
        a=k/10;
    }
    for(l=m;l>0;l--)
    {
        if(b[l]==4||b[l]==7)
            j=j+1;
    }
   if(j==m)
   {
       t=t+1;
       c[t]=n;
   }
   a=n;j=0;m=0;
    }
    for(r=14;r>=1&&h==0;r--)
        {
            if(x%c[r]==0)
            {
                d=d+1;
            }
            if(d==1)
                {printf("YES");
            h=h+1;}
        }
        if(h==0)
            printf("NO");


}