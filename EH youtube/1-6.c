#include <unistd.h>

void print(char *str)
{
    int i = 0;
    while (str[i] != '\0') //pointer yazdırma
    {
        write(1,&str[i],1);
        i++;
    }
    
}


int main(int argc,char **argv) // argüman sayıssı 2 den küçükse HATA yazdır
{                               // a./aut 1. argüman
    if (argc > 2)
    {
        print(argv[argc-1]);

    }
    else
    {
        print("HATALI");
    }
    
}