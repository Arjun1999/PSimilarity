#include<stdio.h>
int main()
    {
    int a[100],n,i,s=0
        printf("Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("now enter the elements\n");
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        s+=a[i];}
    printf("sum:%d\n",s);
}