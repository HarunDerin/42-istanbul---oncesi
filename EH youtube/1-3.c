#include <unistd.h> //bi büyük bi küçük harf moddeli

int main()
{
    char f = 'a';
    char s = 'B';
    while(f <= 'z')
    {
        write(1,&f,1);
        write(1,&s,1);
        f += 2;
        s += 2;
    }
    write(1,"\n",1);


}
