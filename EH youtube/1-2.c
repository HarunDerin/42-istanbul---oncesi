#include <unistd.h>
// 0 dan 9 a kadar yazım

int main()
{
    char c = '0';
    while (c <= '9')
    {
        write(1,&c,1);
        c++;
    }
    write(1,"\n",1);
}
