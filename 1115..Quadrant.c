#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,i;
    //scanf("%d %d", &X, &Y);
    i=1;
    while(i>=1)
    {
    scanf("%d %d", &X, &Y);
    if(X>0 && Y>0)
        printf("primeiro\n");
    else if(X>0 && Y<0)
        printf("quarto\n");
    else if(X<0 && Y<0)
        printf("terceiro\n");
    else if(X<0 && Y>0)
        printf("segundo\n");
    else if(X==0 || Y==0)
        break;
    i++;
    }
    return 0;
}
