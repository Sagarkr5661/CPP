#include<iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter Number : ";
    cin >> N;
    int i;
     for ( i = 2; i < N; i++)
     {
        if (N%i==0)
        {
            cout << "Non Prime" << endl;
            break;
        }
     }
     if (i==N)
     {
     cout <<"prime" << endl;
     }

}