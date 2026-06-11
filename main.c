#include <stdio.h>
#include "piratas.h"
#include "sorting.h"

int comparePirates(const void *x, const void *y);

int main(void)
{
    int n;
    scanf("%d", &n);

    Piratas pirates[1000];

    for(int i = 0; i < n; i++)
    {
        scanf("%s %lld %d %s",
              pirates[i].name,
              &pirates[i].bounty,
              &pirates[i].age,
              pirates[i].crew);
    }

    insertionSort(
        pirates,
        n,
        sizeof(Piratas),
        comparePirates
    );

    for(int i = 0; i < n; i++)
    {
        printf("%s %lld %d %s\n",
               pirates[i].name,
               pirates[i].bounty,
               pirates[i].age,
               pirates[i].crew);
    }

    return 0;
}
