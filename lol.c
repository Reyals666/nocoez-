#include <stdio.h>
#include <stdlib.h>

int parzysta(int a)
{
    scanf("%d", &a);
    if (a%2!=0)
        return 1;
    else
        return 0;
}
