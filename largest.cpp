#include<iostream>
using namespace std;
int main ()
{
    int n1;
    int n2;
    int n3;
    int com ;
    cout<<"ENTER A NUMBER 1 : ";
    cin>>n1;
    cout<<"ENTER A NUMBER 2 : ";
    cin>>n2;
    cout<<"ENTER A NUMBER 3 : ";
    cin>>n3;
    if(n1>n2 && n1>n3)
    {
        cout<<"NUMBER 1 IS LARGEST";
    }
    else if (n2>n1 && n2>n3)
    {
        cout<<"NUMBER 2 IS LARGEST";
    }
    else
    {
        cout<<"NUMBER 3 IS LARGEST";
    }

}