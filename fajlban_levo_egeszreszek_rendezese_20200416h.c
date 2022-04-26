#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"
#define MAX_LENGTH 256


int * sorted(const int n, const int eredeti[])
{
    int *copy = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        copy[i] = eredeti[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (copy[j]<copy[i])
            {
                int temp =copy[i];
                copy[i] = copy[j];
                copy[j] = temp;
            }
            
        }
    }
    return copy;
}

void tomb_kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", tomb[i]);
    }
    
}

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        puts("Hiba! Nem adott meg egy szoveges allomanyt!\n");
        exit(1);
    }
    char *filename = argv[1];
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Nem sikerult megnyitni a %s nevu fajlt!\n", filename);
        return 1;
    }

    // reading line by line, max 256 bytes
    char buffer[MAX_LENGTH];
    int n = 0;
    int i = 0;
    int szamok[1000];
    while (fgets(buffer, MAX_LENGTH, fp))
    {
        szamok[i]= atoi(buffer);
        i++;
        n++;
    }   
    // close the file
    fclose(fp);
    int *rendezett = sorted(n, szamok);
    tomb_kiir(n,szamok);
    tomb_kiir(n,rendezett);
    free(rendezett);
    return 0;
}