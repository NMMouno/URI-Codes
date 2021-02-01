#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(a>12 &&(b>=0 && b<=12))
    {
        printf("O JOGO DUROU %d HORA(S)\n", (24%a)+b);
    }
    else if(b>12 &&(a>=0 && a<=12))
    {
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }
    return 0;
}
