# include <stdio.h>
int main()
{
    int a[]={1,2,3,4,10,11};
    int i,sum=0;
    for ( i=0;i<6;i++)
    {
        sum=sum+a[i];
    }
printf ( "%d", sum);

}
