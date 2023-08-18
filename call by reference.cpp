#include<iostream>
using namespace std;
int main()
{
    int X=100;
    cout<<X<<endl;
    int &abc =X;
    cout<<abc<<endl;
    cout<<"\n Memory address of abc= "<<&abc;
    cout<<"\n Memory address of X= "<<&X<<endl;
    abc=abc*10;
    cout<<X;
}