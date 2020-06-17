#include<stdio.h>
int add(int a,int b)
    {
    int sum=a+b;
    return sum;
}

int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    int temp;
    for(int i=0;i<num;i++)
        {
         scanf("%d",&temp);
        sum=add(sum,temp);
    }
    printf("%d",sum);
    return 0;
    
}