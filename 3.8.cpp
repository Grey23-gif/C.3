#include <stdio.h>

int main() 
{
    int number, lap ;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    
    char so[44];
    sprintf(so, "%d", number);
    
    lap = (number % 10) * 1000 + ((number / 10) % 10) * 100 + ((number / 100) % 10) * 10 + (number / 1000);
    printf("Dao nguoc cua %d la: %d",number,lap);
    return 0;
}
