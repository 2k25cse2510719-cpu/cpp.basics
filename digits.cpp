#include <iostream>
using namespace std;

int main()
{
    int choice = 1;

    while (choice != 0)
    {
        int sw;

        cout << "\n===== MENU =====\n";
        cout << "1. Reverse a Number\n";
        cout << "2. Check Palindrome\n";
        cout << "3. Sum of Digits\n";
        cout << "Enter Choice: ";
        cin >> sw;

        int a;
        cout << "Enter a Number: ";
        cin >> a;

        switch (sw)
        {
            case 1:
            {
                int temp = a;

                cout << "Reverse = ";
                while (temp != 0)
                {
                    cout << temp % 10;
                    temp /= 10;
                }
                cout << endl;
                break;
            }

            case 2:
            {
                int temp = a;
                int reverse = 0;

                while (temp != 0)
                {
                    reverse = reverse * 10 + temp % 10;
                    temp /= 10;
                }

                if (reverse == a)
                    cout << "Palindrome\n";
                else
                    cout << "Not a Palindrome\n";

                break;
            }

            case 3:
            {
                int temp = a;
                int sum = 0;

                while (temp != 0)
                {
                    sum += temp % 10;
                    temp /= 10;
                }

                cout << "Sum of Digits = " << sum << endl;
                break;
            }

            default:
                cout << "Invalid Choice\n";
        }

        cout << "\nDo you want to continue?\n";
        cout << "Press 1 to Continue or 0 to Exit: ";
        cin >> choice;
    }

    cout << "\nProgram Ended.\n";
    return 0;
}