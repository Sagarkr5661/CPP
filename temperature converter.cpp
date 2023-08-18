#include <iostream>
using namespace std;
int main()
{
    float FAHRENHEIT ,CELCIUS;
    cout << " ENTER THE TEMPERATURE IN FAHRENHEIT " <<endl;
    cin >> FAHRENHEIT;
    CELCIUS =5*(FAHRENHEIT-32)/9;
    cout << FAHRENHEIT <<" FAHRENHEIT IS EQUAL TO "<< CELCIUS <<" CENTIGRADE "<< endl;
    if (CELCIUS>0 && CELCIUS<20)
    {
        cout<< " TEMP IS NORMAL "<<endl;
    }
    else{
        cout << " TEMP IS HOT "<< endl;
    }
    return 0;
}




