#include <stdio.h>

int pow(int base,int power)
{
    if (power==0)
    {
        return 1;
    }
    return base*pow(base,power-1);
}
int powerMod(int base,int power,int n)
{
    int a=pow(base,power);
    return a % n;
}
int main()
{
    int base,power,n;
    printf("Enter the base number:");
    scanf("%d", &base);
    printf("Enter the power number:");
    scanf("%d", &power);
    printf("Enter mod:");
    scanf("%d",&n);
    printf("%d^%d mod %d: %d",base,power,n,powerMod(base,power,n));
    return 0;
}