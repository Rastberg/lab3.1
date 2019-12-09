#include "math.h"
struct Agent
{
   int x;
   int y;
};

struct Agent newagent(int,int);

void north(struct Agent *);

void south(struct Agent *);

void east(struct Agent *);

void west(struct Agent *);

double distance(struct Agent a,struct Agent b);
