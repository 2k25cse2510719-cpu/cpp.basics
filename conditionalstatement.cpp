//Take a student's marks (0–100).
//A : 90-100
// B : 80-89
// C : 70-79
// D : 60-69
// F : Below 60
#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter Your Marks ";
    cout<<endl;
    cin>>a;
    if(a<=100&&a>=90)
    {
        cout<<"A";
    }
    if(a<=89&&a>=80)
    {
        cout<<"B";
    }
    if(a<=79&&a>=70)
    {
        cout<<"C";
    }
    if(a<=69&&a>=60)
    {
        cout<<"D";
    }
    else if(a<60)
    {
        cout<<"Fail";
    }
}