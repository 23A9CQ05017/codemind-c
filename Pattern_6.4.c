#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i-1;j>0;j--)
        {
            printf(" ");
        }
        for(k=n-i+1;k>0;k--)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}