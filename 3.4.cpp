#include <stdio.h>

int main()
{
    float T,V,A;
    printf("Nhap diem toan: ");
    scanf("%f",&T);
    printf("Nhap diem van: ");
    scanf("%f",&V);
    printf("Nhap diem anh: ");
    scanf("%f",&A);
    printf("Diem trung binh la:  %.2f\n",(T+V+A)/3 );
    

    return 0;
}

