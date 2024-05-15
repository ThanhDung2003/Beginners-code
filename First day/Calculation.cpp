#include <iostream>
#include <math.h>

using namespace std;

void Show(double a, double b)
{
    cout << "a: " << a;
    cout << "\nb: " << b;
}

void Input(double &a, double &b)
{
    cout << "Number a: ";
    cin >> a;
    cout << "Number b: ";
    cin >> b;
}

void Plus(double a, double b)
{
    cout << "Results: ";
    cout << a << " + " << b << " = " << a + b;
}

void Subtract(double a, double b)
{
    cout << "Results: ";
    cout << a << " - " << b << " = " << a - b;
}

void Multiple(double a, double b)
{
    cout << "Results: ";
    cout << a << " * " << b << " = " << a * b;
}

void Divide(double a, double b)
{
    cout << "Results: ";
    double c;
    if (b == 0)
    {
        cout << "\nCan not calculate.\n";
        return;
    }
    c = a / b;
    cout << a << " / " << b << " = " << round(c * 10000) / 10000;
}

void ShowMenu()
{
    cout << "\n-------------------------------------------\n";
    cout << "Calculation\n";
    cout << "0. Input\n";
    cout << "1. Show a, b\n";
    cout << "2. Plus\n";
    cout << "3. Subtract\n";
    cout << "4. Multiple\n";
    cout << "5. Divide\n";
    cout << "6. Exit\n";
    cout << "\n-------------------------------------------\n";
}

void Selection(int &sel)
{
    cout << "Selection: \n";
    cin >> sel;
}

int main()
{
    int sel;
    char c;
    double a, b;
    bool check = false;
    while (true)
    {
        ShowMenu();
        Selection(sel);
        switch (sel)
        {
        case 0:
            Input(a, b);
            check = true;
            continue;
        case 1:
            if (check == false)
            {
                cout << "No input found.";
                continue;
            }
            Show(a, b);
            continue;
        case 2:
            if (check == false)
            {
                cout << "No input found.";
                continue;
            }
            Plus(a, b);
            break;
        case 3:
            if (check == false)
            {
                cout << "No input found.";
                continue;
            }
            Subtract(a, b);
            break;
        case 4:
            if (check == false)
            {
                cout << "No input found.";
                continue;
            }
            Multiple(a, b);
            break;
        case 5:
            if (check == false)
            {
                cout << "No input found.";
                continue;
            }
            Divide(a, b);
            break;
        case 6:
            return 0;
        default:
            cout << "Try again: ";
        }
        cout << "\nDo you want continue (y/n)?\n";
        cin >> c;
        if (c == 'n')
        {
            cout << "End.\n";
            break;
        }
        else if (c == 'y')
        {
            cout << "Restart.\n";
        }
        else
        {
            cout << "Try again: ";
            cin >> c;
        }
    }
    return 0;
}