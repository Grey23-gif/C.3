#include <stdio.h>
#include <string.h>

int main() 
{
    int number, sum =0;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    
    char so[44];
    sprintf(so, "%d", number);
    
    printf("So dao nguoc cua %d la: ", number);
    for(int i=strlen(so);i>-1 ;i--)
    {
        printf("%c", so[i]);
    }
 
    return 0;
}
