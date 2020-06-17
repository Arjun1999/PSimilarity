#include<stdio.h>


void miniMaxSum(int arr_count, int* a) {
    int i,j,tmp;
    long int min_sum=0,max_sum=0;
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(a[j]>a[j+1])
           {
               tmp=a[j];
               a[j]=a[j+1];
               a[j+1]=tmp;
           }
       }
   }
    
    for(i=0;i<4;i++)
    {
        min_sum+=a[i];
    }
    
    for(j=4;j>=1;j--)
    {
        max_sum+=a[j];
    }
    
    printf("%d %d",min_sum,max_sum);

}

int main()
{
    int a[]={1,2,3,4,5};
    miniMaxSum(5,a);
    return 0;
}