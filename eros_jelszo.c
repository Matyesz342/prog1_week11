#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int random;
    int hossz = rand() % 12 + 8;
    char karakter;
    for (int i = 0; i < hossz; i++)
    {
        ujra:
        random = rand() % 122 + 39;
        if (random == 39 || random == 44 || random == 46 || random == 59 || 48 <= random && random <= 57 || 65 <= random && random <= 90 || 97 <= random && random <=122)
        {
            karakter = random;
        }
        else
        {
            goto ujra;
        }
        printf("%c", karakter);
    }
    puts("\n");
    return 0;
}