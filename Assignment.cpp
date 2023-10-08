#include<iostream>
using namespace std;

int main()
{
    // int i,j,k;
    // i=0;
    // j=0;
    // k=0;

    // cout<<i<<" "<<j<<" "<<k<<endl
    // j=i++;
    // cout<<i<<" "<<j<<" "<<k<<endl
    // k=++i;
    // cout<<i<<" "<<j<<" "<<k<<endl

    // int i;
    // for(i=1;i<101;i++)
    // {
    //     cout<<i<<" ";
    // }
    // int i;

    // i=1;
    // while(i<101)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }

    int i,input;
    i=100;
    for(i=1;i<101;i++)
    {
        cin>>input;
        if(input == 65)
        {
            cout<<"Congrats you have guessed correct ";
            break;
        }
    }

}