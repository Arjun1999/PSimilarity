#include<stdio.h>
#include<math.h>


     void merge(long long int *a,int low,int mid,int up,long long int *b)
     {

         int l1,l2,l3;
         for(l1=low,l2=mid+1,l3=low;(l1<=mid&&l2<=up);l3++)
         {
             if(a[l1]<=a[l2])
                b[l3]=a[l1++];
             else
                 b[l3]=a[l2++];
          }
          while(l1<=mid)
            b[l3++]=a[l1++];
          while(l2<=up)
            b[l3++]=a[l2++];
          for(l3=low;l3<=up;l3++)
            a[l3]=b[l3];
     }
void merge_sort(long long int *a,int low,int up,long long int *b)
{
    int mid;
    if(low==up)
    {

        return;
    }
    else
    {

        mid=floor((low+up)/2);

        merge_sort(a,low,mid,b);
        merge_sort(a,mid+1,up,b);
        merge(a,low,mid,up,b);
    }

}

int main()
{
     int size=5,i;
    
   long long int a[5],b[5];
    for(i=1;i<=size;i++)
        scanf("%lld",&a[i]);
       

     merge_sort(a,1,size,b);
    
   long long int sum1=0; 
   long long int sum2=0;
    for(i=1;i<=4;i++)
        sum1=sum1+a[i];
    for(i=5;i>=2;i--)
        sum2=sum2+a[i];
    printf("%lld %lld",sum1,sum2);
    return 0;

}
