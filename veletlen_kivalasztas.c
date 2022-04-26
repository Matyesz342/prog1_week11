#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int choice(const int n, const int tomb[])
{
    int hanyadik = rand() % n + 0;
    int ertek = tomb[hanyadik];
    return ertek;
}

int main()
{
    srand(time(NULL));
    int szamok[10] = {1,5,12,4,15,7,9,11,3,13};
    int n = 10;
    int valasztas = choice(n,szamok);
    printf("%d\n",valasztas);

    return 0;
}