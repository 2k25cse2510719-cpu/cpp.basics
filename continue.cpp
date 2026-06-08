//learning how to use continue statement
#include<iostream>
using namespace std;
int main ()
{ 
    int a,b;
    cout<<"Enter number of terms : "<<endl;
    cin>>a;
    for(int i =0 ;i<=a;i++)
    {
        if(i%3==0)
        continue;
        cout<<i<<endl;
    }

//Skip multiples of 3 and 5 
for(int i =0 ;i<=a;i++)
{
if(i%3==0||i%5==0)
continue;
cout<<i<<endl;
}
}