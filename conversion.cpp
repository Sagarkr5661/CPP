#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num;
    cout<<"Enter number in Octal form=";
    cin>>setbase(8)>>num;
    cout<<"Value of number in decimal form="<<setbase(10)<<num<<endl;
    cout<<"Value of number in octal form="<<setbase(8)<<num<<endl;
    cout<<"Value of number in hexadecimal form="<<setbase(16)<<num;
    return 0;
}


    

#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter hexadecimal number=";
    cin>>hex>>i;
    cout<<"Hexadecimal value="<<hex<<i<<endl;
    cout<<"Octal value="<<oct<<i<<endl;
    cout<<"Decimal Value="<<dec<<i<<endl;
    return 0;
}







