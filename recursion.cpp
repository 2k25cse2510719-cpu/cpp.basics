#include<iostream>
using namespace std;

void num(int n)
{
    if(n == 0)  // Base case
    {
        cout << n;
        return;
    }

    cout << n << " ";
    num(n - 1);
}

int main()
{
    int n = 7;
    num(n);
}