#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    long int a[5],i,j,temp,min=0,max=0; 
     for (i=0;i<5;i++)
    {
        scanf("%ld", &a[i]);
    }
    for (i=0;i<5;i++)
    {
        for (j =0;j<(4-i);j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("%ld ",a[0]+a[1]+a[2]+a[3]);
    printf("%ld",a[1]+a[2]+a[3]+a[4]);
    
    return 0;
                            
}
                            