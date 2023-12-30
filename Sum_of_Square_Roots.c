#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sum=0,s;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=sqrt(i);
        sum+=s;
    }
    printf("%.2f",sum);
}
