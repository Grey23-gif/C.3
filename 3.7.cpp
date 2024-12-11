#include <stdio.h>
#include <string.h>

int main() 
{
    int number, sum =0;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    
    char so[44];
    sprintf(so, "%d", number);
    
    for(int i=0;i<strlen(so);i++)
    {
        sum+=so[i] - '0';
    }
    printf("Tong cua cac so la: %d",sum);
    return 0;
}
