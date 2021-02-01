#include<stdio.h>
#include<math.h>
int main()
{
    int X, Y, i;
    scanf("%d %d", &X, &Y);
    for(i=1;i<=Y;i++)
    {
        if(i%X==0){
            printf("%d", i);
            printf("\n");
            }
        else
            printf("%d ",i);
    }
    return 0;
}
