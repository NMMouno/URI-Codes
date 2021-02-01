#include<stdio.h>
int main()
{
    double a, b,c, d;
    int i;
    while(1)
    {
    while(1)
    {
        scanf("%lf", &b);
        if(b<0 || b>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            a=b;
            break;
        }
    }
      while(1)
    {
        scanf("%lf", &c);
        if(c<0 || c>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            d=c;
            break;
        }
    }
    printf("media = %.2lf\n", (a+d)/2);
    printf("novo calculo (1-sim 2-nao)\n");
    while(1)
    {
    scanf("%d", &i);
    if(i<1 || i>2)
    {
         printf("novo calculo (1-sim 2-nao)\n");
        continue;
    }
    else
        break;

    }
    if(i==1)
        continue;
    else
        break;
}
return 0;
}
