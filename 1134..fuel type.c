#include<stdio.h>
#include<math.h>
int main()
{
    int a=0, b, g=0, d=0;
    while(1)
    {
        scanf("%d", &b);
        if(b==4)
            break;
        else if(b==1)
            a=a+1;
        else if(b==2)
            g=g+1;
        else if(b==3)
            d=d+1;
        else
            continue;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    return 0;
}
