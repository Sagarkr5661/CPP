#include<iostream>
using namespace std;
class mobile
{
    public:
    char name[255];
    char brand[155];
    float cost;
    public:
    void input()
    {
        cout<<"\n enter the mobile name ";
        fflush(stdin);
        cin>> name;
        
        cout<<"\n cost of mobile ";
        cin>> cost;
        cout<<"\n enter brand of mobile ";
        cout<<flush;
        cin>>brand;
        
    }
    void display()
    {
        cout<<"\n name of mobile is "<<name;
        cout<<"\n brand of mobile is "<< brand;
        cout<<"\n cost of mobile is "<<cost;
    }
};
int main()
{
    mobile M[4];
    int i;
    cout<<"\n enter info of 4 mobile";
    for (i=0; i<4; i++)
    {
        M[i].input();

    }
    for (i=0; i<4; i++)
    {
        M[i].display();
    }
    for(i=0; i<4; i++)
    {
        if(M[i].cost>15000)
        cout<<M[i].name<<endl;
    }
    
}



