// Finding GP 2, 6, 18, 54, 162, ...

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, r, n, term, index;

    cout << "Enter First Term : " << endl;
    cin >> a;

    cout << "Enter Common Ratio : " << endl;
    cin >> r;

    cout << "Enter Number Of Terms : " << endl;
    cin >> n;

    // Print GP
    term = a;

    for(int i = 0; i < n; i++)
    {
        cout << term << endl;
        term = term * r;
    }

    // Find indexed term
    cout << "Enter Index of the term : " << endl;
    cin >> index;

    int x = static_cast<int>(a * pow(r, index - 1));

    cout << "Term at index " << index << " = " << x << endl;

    // Find sum
    int sum;

    if(r == 1)
    {
        sum = a * n;
    }
    else
    {
        sum = static_cast<int>((a * (pow(r, n) - 1)) / (r - 1));
    }

    cout << "Sum = " << sum << endl;

    return 0;
}