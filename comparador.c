#include <string.h>
#include "piratas.h"

int comparePirates(const void *x, const void *y)
{
    const Piratas *p1 = x;
    const Piratas *p2 = y;

    if(p1->bounty != p2->bounty)
        return (p1->bounty < p2->bounty) ? 1 : -1;

    if(p1->age != p2->age)
        return p1->age - p2->age;

    int cmp = strcmp(p1->name, p2->name);

    if(cmp != 0)
        return cmp;

    return strcmp(p1->crew, p2->crew);
}
