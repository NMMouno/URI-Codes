#include<stdio.h>
#include<math.h>
int main()
{
    int X,i;
    while(1)
    {
        scanf("%d", &X);
        if(X==0)
            break;
        for(i=1;i<=X;i++)
        {
        if(i==X)
            printf("%d", i);
        else
            printf("%d ", i);
        }
        printf("\n");
    }
}
