#include <stdio.h>
#include <stdlib.h>

#define MAGIK_VALUE 64646
int main()
{
    int num, i, negative_flag = 0;
    scanf("%i",&num);

    if (num < 0)
    {
        num = abs(num);
        negative_flag = 1;
    }
    for (i=0; i<sizeof(int) * 8; i++)
    {
        if (num == (1<<i))
            {
                if (negative_flag == 1)
                {
                    printf("Num is -2^%i",i);
                }

                else
                {
                    printf("Num is 2^%i",i);
                }
                i = MAGIK_VALUE;
                break;
            }

    }

    if (i != MAGIK_VALUE)
    {
        printf("num is not a power of 2");
    }

    return 0;
}
