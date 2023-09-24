#include <stdio.h>
int pow(int base, int power)
{
    if (power==0)
    {
        return 1;
    }
    return base*pow(base,power-1);
}
int main()
{
    int base,power;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&power);
    printf("%d to the power %d: %d",base,power,pow(base, power));
    return 0;
}