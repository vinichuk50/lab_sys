#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, s= 0;
    scanf("%d",&a);

    for ( int i = 1; i < 5; i++ )
    {
        s+= pow(a*i+2,2);

    }

    printf("%d\n", s);

    return 0;
}

