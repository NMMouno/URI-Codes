#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, par=0,impar=0,pos=0,neg=0;
    for(i=0;i<5;i++)
    {
        scanf("%d", &j);
        if(j%2==0)
        {
            par=par+1;
        }
        if(j%2==1 || j%2==-1)
        {
            impar=impar+1;
        }
        if(j>0)
        {
            pos=pos+1;
        }
        if(j<0)
        {
            neg=neg+1;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
