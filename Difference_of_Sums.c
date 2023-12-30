#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a=0,b=0,sr,dif;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        m=i*i;
        a+=m;
        b+=i;
    }
    sr=b*b;
    dif=abs(a-sr);
    printf("%d",dif);
}