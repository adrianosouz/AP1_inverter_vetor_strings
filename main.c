#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c,teste[10];
    int i;

    printf("digite um caractere: \n");


    for (i = 0 ; i < 10; i++)
         {
        scanf("\n%c",&i);
    teste[i] = i;
    }
    for (i = 0 ; i < 10; i++)
    {
        scanf("\n%c",&teste[i]);
    }
    c = teste [2];
    teste[2] = teste[7];
    teste[7] = c;
    for (i = 0 ; i < 10; i++)
    {
        printf("%c ",teste[i]);
    }
    for (i = 0 ; i < 5; i++)
    {
        c = teste[i];
        teste[i] = teste[9-i];
        teste[9-i] = c;
    }
    printf("\n Vetor invertido: \n");
    for (i = 0 ; i < 10; i++)
    {
        printf("\n%c ",teste[i]);
    }

    return 0;

}
