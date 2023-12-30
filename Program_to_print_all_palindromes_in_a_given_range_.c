#include<stdio.h>
int main()
{
    int a,b,tem,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        tem=i;
        int r=0;
        while(tem>0)
        {
            r=r*10+(tem%10);
            tem/=10;
        }
        if(i==r)
        {
            printf("%d ",r);
        }
    }
}