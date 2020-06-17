#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
     long int arr[5],temp,count,cout,cin,min=0,max=0;
    cin >> a >> b >> c >> d >> e;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(int i=0;i<5;i++)
 {   
        for(int j=0;j<5;j++)
        {
        if(arr[j]>arr[j+1])
            {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
}
    
   min=arr[1]+arr[2]+arr[3]+arr[4];
    
   max=arr[2]+arr[3]+arr[4]+arr[5];
    cout<<min<<" "<<max;
    
    return 0;
}
