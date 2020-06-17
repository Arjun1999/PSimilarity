#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int p;
    scanf("%d",&p);
    int a[p];
    int i,j,s1=0,s2=0,t;
    for(i=0;i<p;i++)
    scanf("%d",&a[i]);
    for(i=0;i<p;i++)
    {
        for(j=0;j<p-1;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
            
    }
    for(i=0;i<p-1;i++)
    {
        s1=s1+a[i];
    }
        for(i=p;i>0;i--)
        {
            s2=s2+a[i];
        }
    printf("%d  %d",s1,s2);
    
}

/*
int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    return 0;
}
*/
