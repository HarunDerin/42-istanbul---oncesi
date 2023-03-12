#include <stdio.h>

int length(char *sstr)   // fonnkssiyon uzunluğuınu yazar
{
    int i = 0;
    char arr[] = "merhsddsadaaba";
    while (sstr[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    printf("%d", length("merhabawdadwa"));
}