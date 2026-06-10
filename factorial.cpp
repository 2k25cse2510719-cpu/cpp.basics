//Printing a factorial series
#include<iostream>
using namespace std;
int main ()
{
    int a ,b,fact=1 ;
    cout<<"Enter Number of terms : "<<endl;
    cin>>a;
    for(int i =1;i<=a;i++)
    {
fact=fact*i;
cout<<fact<<endl;
    }
cout<<"Enter Number for factorial : "<<endl;
cin>>b;
fact=1;
for(int i =1;i<=b;i++){
fact=fact*i;
}
cout<<fact<<endl;
}