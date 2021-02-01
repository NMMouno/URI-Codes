#include<stdio.h>
#include<math.h>
int main()
{
    int time, speed;
    float fuel;
    scanf("%d %d", &time, &speed);
    fuel=(time*speed);
    printf("%.3f\n", fuel/12);
    return 0;
}

