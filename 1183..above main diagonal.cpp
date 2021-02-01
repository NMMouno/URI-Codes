#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char O;
    double M[12][12], sum=0, avg;
    int i, j;
    cin>>O;
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>M[i][j];
            if(j>i)
                {
                    sum=sum+M[i][j];
                }
        }
    }
    if(O=='S')
    {
        printf("%.1f\n", sum);
    }
    else if(O=='M')
    {
        avg=sum/66.0;
        printf("%.1f\n", avg);
    }
    return 0;
}

