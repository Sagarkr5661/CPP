#include<iostream>
using namespace std;
inline int Max(int X,int Y)
{
    return(X>Y)? X:Y;

}
int main()
{
    cout<<"Max(20,10):"<<Max(20,10)<<endl;
    cout<<"Max(0,200):"<<Max(0,200)<<endl;
    cout<<"Max(100,1010):"<<Max(100,1010)<<endl;
}