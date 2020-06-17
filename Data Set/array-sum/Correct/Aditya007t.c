#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int size,*arr,sum=0,i;
		scanf("%d",&size);
        arr=(int *)malloc(sizeof(int )*size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&*(arr+i));
            sum+=*(arr+i);
        }
        printf("%d",sum);
}