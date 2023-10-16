#include<stdio.h>
int main()
{
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
    if (s1+s2>s3)
    {
        printf("Valid triangle");
    }
    else if (s1+s2<s3)
    {
        printf("Invalid triangle");
    }
}