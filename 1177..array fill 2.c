#include<stdio.h>
#include<math.h>
int main()
{
    int N[1000],T, i,j=0;
    scanf("%d", &T);
    for(i=0,j;i<1000;i++,j++)
    {
        if(j==T)
            {
                j=0;
            }
        printf("N[%d] = %d\n", i, j);

    }
    return 0;
}

