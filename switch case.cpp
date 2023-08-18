#include<iostream>
using namespace std;
int main()
{
    float area,radius;
    int length,bredth,side,option;
    cout <<"1.area of circle "<<endl;
    cout <<"2.area of square" << endl;
    cout <<"3.area of rectangle"<< endl;
    cout <<"\n Enter Your Choice";
    cin>>option;
    switch(option)
    {
    case 1:
        cout <<"\n Enter the radius: ";
        cin>>radius;
        cout<<"area of circle is "<<3.142*radius*radius*radius ;
        break;
    case 2:
        cout <<"\n Enter the side: ";
        cin >>side;
        cout<<"Area of square is "<<side * side;
        break;
    case 3:
        cout<<"\n Enter the length: ";
        cout <<"\n Enter the bredth: ";
        cin>>length;
        cin>>bredth;
        cout <<"Area of rectangle "<<length * bredth;
        break;
        default:
        cout<<"invalid";

    }


}