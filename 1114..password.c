#include<stdio.h>
#include<math.h>
int main()
{
    int X,i;
    i=1;
    while(i>=1)
    {
    scanf("%d", &X);
    if(X!=2002)
        printf("Senha Invalida\n");
    else if(X==2002)
    {
        printf("Acesso Permitido\n");
        break;
    }
    i++;
    }
    return 0;
}
