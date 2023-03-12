#include <stdio.h>

int main()
{
    char a = '1'; // sayısal değerleri ölçmez o yüzden 99
    char b = '2';

    int c = '3'; // sayıısal değer için int kullanlır iki değeri toplardı
    int d = '4';

    printf("char toplam: %d\n", a+b);
    printf("int  toplam: %d\n", c+d);

}