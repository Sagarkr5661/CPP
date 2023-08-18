#include<iostream>
using namespace std;
void swap(int , int);
int main()
{
    int a ,b;
    cout<<"\n Enter the value of a and b "<<endl;
    cin>>a>>b;
    swap(a,b); //calling of function
    cout<<"\n After the swapping of a= "<<a<<endl;
    cout<<"\n After the swapping of b= "<<b<<endl;
}
void swap(int X,int Y)
{
    int temp;
    temp=X;
    X=Y;
    Y=temp;
    cout<<"\n After the swapping of X= "<<X<<endl;
    cout<<"\n After the swapping of Y= "<<Y<<endl;
}