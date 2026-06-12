#include<iostream>
using namespace std;
void swap(int *a , int *b)
{
    int temp = *a;
    *a=*b;
*b=temp;
}
int main ()
{
    int a =25,b=87;
    swap(&a,&b);
    cout<<a<<" "<<b;
}