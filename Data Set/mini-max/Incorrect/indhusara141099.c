#include<stdio.h>
int main()
{
    int n,i,j,s,a[100],k,t,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    k=0;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
               continue;
            s=s+a[j];
               
        }
        b[k]=s;
        k++;
    }  
   
    printf("%d %d",b[n-1],b[0]);
    return 0;
}
