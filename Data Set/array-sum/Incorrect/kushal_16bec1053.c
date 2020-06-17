#include<stdio.h>
#include<string.h>
#include<math.h>
int sum(int ar[],int n)
{ 
    
    int sum = 0;  
    for (int i = 0; i < n; i++) 
    sum+=ar[i];
    return sum; 
}


int main()
{
    int ar[] = {1,2,3,4,10,11}; 
    int n =6;
     int s=sum(ar,n);
     printf("%d",s); 
    return 0; 
} 



