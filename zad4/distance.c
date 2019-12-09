#include "agents.h"

double distance(struct Agent a,struct Agent b)
{
    int deltax = a.x - b.x;
    int deltay = a.y - b.y;
    double dist = sqrt(deltax*deltax+deltay*deltay);
    return dist;
}
