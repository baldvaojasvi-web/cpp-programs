#include<iostream>
using namespace std;
int main ()
{
    int fac = 1 ;
    int n ;
    cout<<"ENTER THE NUMBER WHOSE FACTORIAL YOU WANT : ";
    cin>>n;
    for(int i = 1; i<=n ; i++)
    fac= fac * i ;
cout<<"THE FACTORIAL OF THE NUMBER IS :"<<fac ;
return 0 ;
}