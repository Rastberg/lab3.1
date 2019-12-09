#include "func.h"

long int phi(long int n)
{
    long int counter = 0;
    for(long int i = 2;i<n;i++)
    {
        if (nwd(n,i)==1)
            counter++;
    }
    return counter;
}
