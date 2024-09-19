#include <stdio.h>

void main()
{
    int sum = 1, i;
    for(i=2; i<100; i++)
        sum+=i;
    printf("%d", sum);
}
