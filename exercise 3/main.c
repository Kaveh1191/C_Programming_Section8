/*Name:Kaveh Masoudinia
Section 8 Exercise 3
Date:12/08/2021(1400/09/17)*/
#include <stdio.h>

int binary(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 *binary(n / 2));
}
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("%d", binary(n));
    return 0;
}