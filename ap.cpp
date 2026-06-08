//Arithematic Progression 
//1,4,7,10;
#include<iostream>
using namespace std;
int main ()
{ int a ,d,n,t,j,x;
    cout<<"Enter First Term : "<<endl;
    cin>>a;
    cout<<"Enter Common Difference : "<<endl;
    cin>>d;
    cout<<"Enter Number of terms to be printed : "<<endl;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        cout<<a+i*d<<endl;
    }
    cout<<"Enter Index to Find : "<<endl;
cin>>j;
x=a+(j-1)*d;
cout<<x<<endl;
}