#include<stdio.h>
int main()
{
    int b,i,a[5],s1=0,s2=0,s3=0,s4=0,s5=0;
    for (i = 0; i < 5;i++)
    {
        scanf("%d",&b);
    }
    {
    for (i = 0; i < 5; i++)
    {
        while(i!=0)
        {
          s1 = s1+a[i];
        }
        while (i!=1) {
          s2 = s2 + a[i];
        }
        while (i != 2) {
          s3 = s3 + a[i];
        }
        while (i != 2) {
          s4 = s4 + a[i];
        }
        while (i != 2) {
          s5 = s5 + a[i];
        }
    }
    }
    {
      if (s1 < s2 && s1 < s3 && s1 < s4 && s1 < s5) {
        printf("%d", s1);
      }
      if (s2 < s1 && s2 < s3 && s2 < s4 && s2 < s5) {
        printf("%d", s2);
      }
      if (s3 < s2 && s3 < s1 && s3 < s4 && s3 < s5) {
        printf("%d", s3);
      }
      if (s4 < s2 && s4 < s3 && s4 < s1 && s4 < s5) {
        printf("%d", s4);
      }
      if (s5 < s2 && s5 < s3 && s5 < s4 && s5 < s1) {
        printf("%d", s5);
      }
    }
    {
      if (s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5) {
        printf("%d",s1);
    }
    else if (s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5) {
      printf("%d",s2);
    }
    else if (s3 > s2 && s3 > s1 && s3 > s4 && s3 > s5)
    {
        printf("%d",s3);
    }
    else if (s4 > s2 && s4 > s3 && s4 > s1 && s4 > s5) {
      printf("%d", s4);
    }
    else if (s5 > s2 && s5 > s3 && s5 > s4 && s5 > s1)
    {
        printf("%d",s5);
    }
    }
}