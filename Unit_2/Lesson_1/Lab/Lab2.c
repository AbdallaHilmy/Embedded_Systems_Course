#include <stdio.h>

int main()
{
    int x,y,z;
    fflush(stdin); fflush(stdout);
    scanf("%d %d %d",&x,&y,&z);
    if(x>=y&&x>=z)
        printf("%d", x);
    else if(y>=z)
        printf("%d", y);
    else
        printf("%d", z);
}
