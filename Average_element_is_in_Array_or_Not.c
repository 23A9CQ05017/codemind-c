#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],cnt=0;
    int ave,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
        if(ave==arr[i])
        {
            cnt++;
        }
    }
    if(cnt>0)printf("True");
    else printf("False");
}