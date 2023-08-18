#include<iostream>
using namespace std;
class car
{
    public:
    char name [20]; //data members
    int seats;
    long int cost;
    public:
    void display() //member function
    {
        cout<<"\n Enter the name ";
        cin>>name;
        cout<<"\n Enter the seats ";
        cin>>seats;
        cout<<"\n Enter the cost ";
        cin>>cost;
        cout<<"\n Name of the car is "<<name;
        cout<<"\n Seats of car is "<<seats;
        cout<<"\n Cost of car is "<<cost;

    }
};
int main()
{
    car c1,c2,c3;
    //c1.seats=5;
    cout<<sizeof(c1)<<"bytes"<<endl;
    c1.display();
    c2.display();
    c3.display();

}