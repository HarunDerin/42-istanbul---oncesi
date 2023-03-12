#include <unistd.h>

void    ft_putstr(char *str)
{
    int sayac;

    sayac = 0;
    while (str[sayac] != '\0')

    {
        write(1, &str[sayac], 1); // bir sayaç sistemi oluşturarak aşşağıda 
        sayac++;                   // yazdığımız kelimeleri işler
    }
    
}

int main()
{
    char *str = "42 Istanbul\n";
    char *str2 = "merhaba";
    ft_putstr(str);
    ft_putstr(str2);
}
