#include<stdio.h>
int main()
{
    int a, b, c, d;
    float e,f;
    scanf("%d %d", &a, &b);
    scanf("%f", &e);
    scanf("%d %d", &c, &d);
    scanf("%f", &f);
    printf("VALOR A PAGAR: R$ %.2f\n", (e*b)+(d*f));
    return 0;
}
