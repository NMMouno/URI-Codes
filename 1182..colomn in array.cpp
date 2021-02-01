#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double M[12][12];
    int L, i, j;
    char T;
    double avg, sum=0;
    cin>>L;
    cin>>T;
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>M[i][j];
            if(j==L)
                {
                    sum=sum+M[i][j];
                }
        }
    }
    if(T=='S')
    {
        printf("%.1f\n", sum);
    }
    else if(T=='M')
    {
        avg=sum/12.0;
        printf("%.1f\n", avg);
    }
    return 0;
}

