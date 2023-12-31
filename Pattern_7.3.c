#include<stdio.h>
int main()
{
    int n,j,k,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%d ",k);
        }
        printf("
");
    }
}