
#include<iostream>
using namespace std;
int main()
{
    int N, i;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        if(i==N)
            cout<<"Ho!"<<endl;
        else
            cout<<"Ho ";
    }
    return 0;
}
