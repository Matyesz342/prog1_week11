#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void shuffle(const int n, int szamok[])
{
    int tomb[n];
    int random;
    for (int i = 0; i < n; i++)
    {
        ujra:
        random = rand() % n + 0;
        for (int j = 0; j < i; j++)
        {
            if (tomb[j] == random)
            {
                goto ujra;   
            }
        }
        tomb[i]=random;
    }
    int masolat[n];
    for (int i = 0; i < n; i++)
    {
        masolat[i]=szamok[i];
    }
    for (int i = 0; i < n; i++)
    {
        szamok[i] = masolat[tomb[i]]; 
    }
}

void tomb_kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("\n");
}

int main()
{
    srand(time(NULL));
    int szamok[10] = {1,5,12,4,15,7,9,11,3,13};
    int n = 10;
    tomb_kiir(n, szamok);
    shuffle(n, szamok);
    tomb_kiir(n, szamok);
    return 0;
}