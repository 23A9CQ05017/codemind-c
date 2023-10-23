#include<stdio.h>
int main()
{
    int unit;
    scanf("%d",&unit);
    float charge;
    if(unit<=199)charge=unit*1.20;
    else if(unit>=200&&unit<400)charge=unit*1.50;
    else if(unit>=400&&unit<600)charge=unit*1.80;
    else if(unit>600)charge=unit*2.00;
    if(charge>400)
    {
        charge=charge+charge*15/100.0;
    printf("%.2f",charge);;
    }
    else
    {
        charge=charge+100;
        printf("%.2f",charge);
    }
}