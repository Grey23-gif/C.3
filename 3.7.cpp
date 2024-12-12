#include <stdio.h>
#include <string.h>

int main() 
{
    int number, sum =0;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    
    char so[44];
    sprintf(so, "%d", number);
    
    sum = (number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);
    printf("Tong cua cac so la: %d",sum);
    return 0;
}
