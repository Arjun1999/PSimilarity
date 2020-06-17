#include<stdio.h>
int main()
{
    int i,max=0,min=0;
    long a=0,b=0;
    long arr[4];
    
    for(i=0;i<5;i++)
     {
         scanf("%ld ",arr[i]);
     }

    for(i=0;i<5;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }

    for(i=0;i<5;i++){
        if(arr[min]<arr[i]){
            min=i;
        }
    }

    for(i=0;i<5;i++){
        a+=arr[i];
        b+=arr[i];
    }
    a=a-arr[max];
    b=b-arr[min];
    
    printf("%d %d",a,b);
}
