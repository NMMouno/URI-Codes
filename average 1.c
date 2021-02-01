#include<stdio.h>
#include<math.h>
int main()
{
    int numb, hour;
    float rate;
    scanf("%d", &numb);
    scanf("%d", &hour);
    scanf("%f", &rate);
    printf("NUMBER = %d\n", numb);
    printf("SALARY = U$ %.2f\n", hour*rate);
    return 0;
}
