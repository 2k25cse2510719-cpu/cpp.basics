// Finding whether a number is a composite number or a prime number.
#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter A Number : "<<endl;
    cin>>a;
    bool flag= false;
      if(a <= 1)
    {
        cout << "Neither Prime nor Composite";
        return 0;
    }
    for(int i =2;i<a;i++)
    {
        if(a%i==0)
        { 
flag=true;
break;}
        }
        if(flag){
            cout<<a<<" Composite";
        }
        else{
            cout<<a<<" Prime";
        }
    }
