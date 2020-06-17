#include<stdio.h>

int main()

{
   long long  int i,arr[100],sum[5]={0,0,0,0,0},ck,j,k,l,m;
    long long int min,max;



    for(k=0;k<5;k++)

    {

        scanf("%lld",&arr[k]);
    }

    for(j=0;j<5;j++)
    {
      ck=j;

    for(i=0;i<5;i++)

    {

        if(i==ck)

            continue;

        sum[j]=sum[j]+arr[i];

    }


    }


        max=sum[0];
        min=sum[0];

      for(m=1;m<5;m++)

      {
          if(sum[m]>max)

          {
              max=sum[m];
          }

         if(sum[m]<min)

         {
             min=sum[m];
         }
      }



        printf("%lld %lld\n",min,max);


    return 0;
}
