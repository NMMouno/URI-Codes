#include<iostream>
using namespace std;
int main()
{
    int C, N, S;
    cin>>C;
    while(C!=0)
    {
        cin>>N;
        if(N%2==0)
            {
                S=0;
                cout<<S<<endl;
            }
        else
        {
            S=1;
            cout<<S<<endl;
        }
        C--;
    }
    return 0;
}
