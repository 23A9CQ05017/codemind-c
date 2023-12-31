#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(int j=i-1;j>0;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i+1;k++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}