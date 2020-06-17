#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int i,min=0,max=0;
    char str[1000];
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    scanf("%d",&str[i]);

    for(i=0;i<(strlen(str)-1);i++)
    {
        min=min+str[i];
    }
    for(i=1;i<strlen(str);i++)
    {
        max=max+str[i];
    }
    printf("%d %d",min,max);
    return 0;
}
