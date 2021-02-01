#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y, i;
    for(i=1;i>=0;i++)
    {
        scanf("%d %d", &X, &Y);
        if(X<Y)
            printf("Crescente\n");
        else if(X>Y)
            printf("Decrescente\n");
        else if(X=Y)
            break;
    }
    return 0;
}
