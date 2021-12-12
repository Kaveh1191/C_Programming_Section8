/*Name:Kaveh Masoudinia
Section 8 Exercise 1
Date:12/12/2021(1400/09/21)*/
#include <stdio.h>
#include <math.h>
void PS(char *set, int set_size)
{
    int pow_set_size = 14;
    int counter, i;
    printf("ALL SUBSET:");
    for(counter = 0; counter < pow_set_size; counter++)
    {
            for(i = 0; i < set_size; i++)
            {
                if(counter & (1<<i))
                    printf("{%c}", set[i]);
            }
            printf("\n");
        }
}
int main()
{
    char set[] = {'A','C','E','G'};
    PS(set, 4);
    return 0;
}
