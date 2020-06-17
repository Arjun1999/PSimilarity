#include<stdio.h>
int main()
{
     unsigned long int a[5];
     unsigned long int b[5];
     unsigned long int sum=0,temp;
     int i,j;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(j=0;j<5;j++)
       {
       sum+=a[j];
       }
    for(i=0;i<5;i++)
    {    
       b[i]=sum-a[i];
    }
    for (i = 0; i <5; ++i)
    {
        for (j =i +1;j<5; ++j)
        {
            if (b[i] > b[j])
            {
                temp =  b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("%ld %ld",b[0],b[4]);    
}
