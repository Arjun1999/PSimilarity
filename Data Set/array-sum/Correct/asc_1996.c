# include<stdio.h>
int main()
{
    int n,a[1000],sum=0;
    scanf("%d\n",&n);
   if(1<=n && n<=1000)
       {
    for(int i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
       return 0;
   }
}