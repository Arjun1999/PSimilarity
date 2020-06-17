#include<stdio.h>
int main()
{
int i,j,k,m=0,o=0,p=0,q=0,r=0,n=5,a[10];
    for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
    {if(i=!4)
    m=m+a[i];
    }
    for(i=0;i<n;i++)
    {
      if(i=!0)
      {
          k=k+a[i];
      }
    }
    for(i=0;i<n;i++)
    {
      if(i=!1)
      {
          o=o+a[i];
      }
    }
    for(i=0;i<n;i++)
    {
      if(i=!2)
      {
          p=p+a[i];
      }
    }
    for(i=0;i<n;i++)
    {
      if(i=!3)
      {
          r=r+a[i];
      }
    }
    if(m>k && m>o && m>p && m>r )
    {
        printf("%d\n",m);
    }
    if(k>m && k>o && k>p && k>r )
    {
        printf("%d\n",k);
    }
    if(o>k && o>m && o>p && o>r )
    {
        printf("%d\n",o);
    }
    if(p>k && p>o && p>m && p>r )
    {
        printf("%d\n",o);
    }
    if(r>k && r>o && r>p && r>m )
    {
        printf("%d\n",p);
    }
     if(m<k && m<o && m<p && m<r)
    {
        printf("%d\n",m);
    }
     if(k<m && k<o && k<p && k<r)
    {
        printf("%d\n",k);
    }
     if(o<k && o<m && o<p && o<r)
    {
        printf("%d\n",o);
    }
     if(p<k && p<o && p<m && p<r)
    {
        printf("%d\n",p);
    }
      if(r<k && r<o && r<p && r<m)
    {
        printf("%d\n",r);
    }
   
  }

