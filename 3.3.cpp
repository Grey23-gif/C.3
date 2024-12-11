#include <stdio.h>

int main()
{
    float r,chuvi,S;
    float pi=3.14;
    printf("Nhap ban kinh: ");
    scanf("%f",&r);
    chuvi=2*r*pi;
    S=pi*r*r;
    printf("chu vi hinh tron la:  %.2f\n",chuvi );
    printf("Dien tich hinh tron la:  %.2f\n",S );

    return 0;
}

