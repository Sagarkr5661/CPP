#include<iostream>
using namespace std;
class convert{
    protected:
    int meters,km;
public:
    void input()
    {
        cout<<"\n Enter the values";
        cin>>km>>meters;
    }
    friends void demo(convert obj);
};
void demo(convert obj){
    cout<<"\n Distance in meters is "<<obj.km1;
}
int main(){
    convert d1;
    d1.input();
    demo(d1);
}
