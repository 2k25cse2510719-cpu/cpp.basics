//Table of a number 
#include<iostream>
using namespace std;
int main ()
{
    int a ;
    cout<<"Which Table You Want To Print ? "<<endl;
    cin>>a;
    for(int i=0;i<=10;i++)
    {
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
    }
}