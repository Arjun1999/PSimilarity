#include<stdio.h>
int main()
{
    int a[1000];
    int smallS = 0 ;
    int largeS = 0;
    int i,j;
    int largeIndex = 0;
    int indexOfSmall = 0;
    int large;
    int small;
    int number;
    large = a[0];
    small = a[0];
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
}
    for(i=0;i<number;i++)
    {
        if(a[i]>large)
        {
            large = a[i];
            largeIndex = i;
        }
}
    for(j=0;j<number;j++)
    {
        if(a[i]<small)
        {
            small = a[i];
            indexOfSmall = i;
        }
    }
    for(i=0;i<number;i++){
        if(i != largeIndex)
        {
            largeS = largeS + a[i];
        }
        if(i != indexOfSmall)
        { 
           smallS = smallS + a[i];           
}
    }
    printf("%d %d",largeS,smallS);
    
  
}