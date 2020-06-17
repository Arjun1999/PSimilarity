#include<stdio.h>
int main()
    {
    long long int n,s,b,sum=0;
    long long int ar[5];
    long long int x,y;

    for(int i=0;i<5;i++)
        {
    //printf("enter the values of an array");
    scanf("%lli ",&ar[i]);
        sum=sum+ar[i];
    }//printf("sum=%lli",sum);
    s=ar[0];
    for(int i=0;i<5;i++)
        {
        if(s>ar[i])
            {
            s=ar[i];
        }

    }//printf("\ns= %lli",s);
    b=ar[0];
    for(int i=0;i<5;i++)
        {
        if(b<ar[i])
            {
            b=ar[i];
        }
    }//printf("b=%lli",b);
    x=sum-s;
    y=sum-b;
    printf("%lli %lli",y,x);


}
 
