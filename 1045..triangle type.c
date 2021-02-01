#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    double temp;
    double tri[3];
    scanf("%lf %lf %lf", &tri[0], &tri[1], &tri[2]);
        for(i=1;i<=3;i++)
        {
        for(j=0;j<i;j++)
        {
            if(tri[j]<tri[j+1])
            {
                temp=tri[j+1];
                tri[j+1]=tri[j];
                tri[j]=temp;
            }
        }
        }
    if(tri[2]>=(tri[1]+tri[0]))
        printf("NAO FORMA TRIANGULO\n");
    else if((tri[2]*tri[2])==(tri[1]*tri[1])+(tri[0]*tri[0]))
        printf("TRIANGULO RETANGULO\n");
    else if((tri[2]*tri[2])>(tri[1]*tri[1]+tri[0]*tri[0]))
        printf("TRIANGULO OBTUSANGULO\n");
    else if((tri[2]*tri[2])<(tri[1]*tri[1]+tri[0]*tri[0]))
        printf("TRIANGULO ACUTANGULO\n");
    else if(tri[2]==tri[1]==tri[0])
        printf("TRIANGULO EQUILATERO\n");
    if((tri[2]==tri[1]!=tri[0]) || (tri[2]!=tri[1]==tri[0]) || (tri[2]==tri[0]!=tri[1]))
            printf("TRIANGULO ISOSCELES\n");
    return 0;
}
