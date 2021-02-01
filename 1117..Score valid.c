#include<stdio.h>
int main()
{
    float a, b,c, d;
    while(1)
    {
        scanf("%f", &b);
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
        scanf("%f", &c);
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
    printf("media = %.2f\n", (a+d)/2);
    return 0;
}
