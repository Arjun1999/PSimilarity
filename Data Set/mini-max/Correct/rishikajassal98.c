#include <math.h>
#include <stdio.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int sum=0,temp;
    int i,j;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long  int x[5];
    for(i=0;i<5;i++)
    {
        sum=a+b+c+d+e;
        switch(i)
        {
            case 0: x[i]=sum-a; break;
            case 1: x[i]=sum-b; break;
            case 2: x[i]=sum-c; break;
            case 3: x[i]=sum-d; break;
            case 4: x[i]=sum-e; break;
            default: x[i]=0;
            
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
            {
            if(x[j]>x[j+1])
                {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("%ld %ld",x[0],x[4]);
    return 0;
    
}
