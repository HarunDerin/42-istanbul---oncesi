#include<unistd.h>

void print(char *str)
{
    int i = 0;
    while (str[i] != '\0') //pointer yazdırma
    {
        write(1,&str[i],1);
        i++;
    }
    
}

int main()
{
    print("harundawdawderin");
}