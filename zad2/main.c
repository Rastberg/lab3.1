#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include <assert.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int potega;
	printf("Podaj potege epsilona: ");
	scanf("%d",&potega);
    double k = pow(10,potega);
	double a=2.0f,b=4.0f;

    printf("Podaj przedzial (a<b i (f(a)*f(b)<0)):\n");

    printf("Podaj liczbę a (a<b)\n");
    scanf("%lf",&a);
    printf("Podaj liczbę b (a<b)\n");
    scanf("%lf",&b);
    assert(a<b);
    assert(f(a)*f(b)<0);

    double wynik = rozwiazanie(a,b,k);
    printf("Wynik: %lf \n",wynik);

    return 0;
}
