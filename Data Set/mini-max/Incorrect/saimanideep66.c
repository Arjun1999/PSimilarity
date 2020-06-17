#include <stdio.h>
int main()
{
    int i,j,p,n,m,l;
    scanf("%d",&n);
for (m=n-1,p=1;m>=0;m--,p++)
{
        for (i=1;i<=m;i++)
        {
            printf(" ");
        }
        for (l=0;l<p;l++)
        {
            printf("#");
        }
        printf("\n");    
}
        
       
}

