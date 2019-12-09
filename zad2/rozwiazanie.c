#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "head.h"
double rozwiazanie(double a,double b,double eps)
{
    double beg = a;
    double end = b;
    double temp = (end + beg)/2;
    bool ready = false;
    while(!ready)
    {

        if((f(temp)+eps) >=0 && (f(temp)-eps) <= 0)
        {
            ready = true;
        }
        else if((f(temp)+eps) < 0 && (f(temp)-eps) < 0)
        {
        if(f(a)>f(b))
         {
            end = temp;
            temp = (end + beg)/2;
         }
           else
           {
           beg = temp;
            temp = (end + beg)/2;
           }
        }
        else if((f(temp)+eps)>0 && (f(temp)-eps) > 0)
        {
            if(f(a)>f(b))
            {
              beg = temp;
              temp = (end + beg)/2;
            }
            else
            {
                end = temp;
                temp = (end + beg)/2;
            }
        }
        else
        {
            printf("Error");
            break;
        }
    }
    return temp;
}
