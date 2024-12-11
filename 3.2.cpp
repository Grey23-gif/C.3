#include <stdio.h>

int main()
{
    float cel,fah;
    printf("Nhap do C: ");
    scanf("%f",&cel);
    fah=(cel * 9/5) + 32;
    printf("Do f la:  %.2f\n",fah );

    return 0;
}

