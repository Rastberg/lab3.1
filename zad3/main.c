#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    long int n;
    printf("Podaj n: ");
    scanf("%ld",&n);
    long int wynik = phi(n);
    printf("wynik: %ld \n",wynik);
    return 0;
}
