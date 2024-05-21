#include <iostream>
#include <math.h>
using namespace std;

void ShowMenu()
{
    cout << "\n-------------------------------------------\n";
    cout << "LOOP\n";
    cout << "1. Print from 1 to 200.\n";
    cout << "2. Multiplication table.\n";
    cout << "3. Reverse number.\n";
    cout << "4. Fibonacci.\n";
    cout << "5. Draw rectangle.\n";
    cout << "6. Exit.\n";
    cout << "\n-------------------------------------------\n";
}

void Selection(int &sel)
{
    cout << "Selection: \n";
    cin >> sel;
}

void Print1to200()
{
    for (int i = 1; i <= 200; i++)
    {
        if (i % 10 == 0)
            cout << i << "\n";
        else
            cout << i << " ";
    }
}

void MultiplicationTable()
{
    int multiple;
    cout << "\nWhat is the multiple?\n";
    cin >> multiple;
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " * " << multiple << " = " << i * multiple << "\n";
    }
}

void ReverseNumber()
{
    int number, reversed = 0;
    int temp = number;
    cout << "\nWhat is the number?\n";
    cin >> number;
    cout << "\nThe number: " << number;
    while (true)
    {
        if (number == 0)
        {
            break;
        }
        else
        {
            temp = number % 10;
            number = number / 10;
            reversed = reversed * 10 + temp;
        }
    }
    cout << "\nThe reversed number: " << reversed;
}

void Fibo(int &Fibo_1, int &Fibo_2)
{
    int temp = Fibo_1;
    Fibo_1 = Fibo_1 + Fibo_2;
    Fibo_2 = temp;
    cout << Fibo_1 << "\t";
}

void Fibonacci()
{
    cout << "\nHow many Fibo numbers you want to print?\n";
    int number;
    cin >> number;
    int Fibo_1 = 0, Fibo_2 = 1;
    for (int i = 1; i <= number; i++)
    {
        Fibo(Fibo_1, Fibo_2);
    }
}

void DrawTriangle()
{
    int width;
    cout << "\nWhat is the width of the triangle?\n**Note: odd number**\n";
    cin >> width;
    while (width % 2 == 0)
    {
        cout << "\nPlease enter the odd number.\n";
        cin >> width;
    }
    // In phần trên của tam giác
    for (int i = 1; i <= (width / 2) + 1; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    // In phần dưới của tam giác
    for (int i = (width / 2); i > 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

bool Retry(char &continued)
{
    cout << "\nDo you want continue (y/n)?\n";
    cin >> continued;
    if (continued == 'n')
    {
        cout << "End.\n";
        return false;
    }
    else if (continued == 'y')
    {
        cout << "Restart.\n";
        return true;
    }
    else
    {
        cout << "Try again: ";
        Retry(continued);
    }
}

int main()
{
    int sel;
    char continued;
    while (true)
    {
        ShowMenu();
        Selection(sel);
        switch (sel)
        {
        case 1:
            Print1to200();
            break;
        case 2:
            MultiplicationTable();
            break;
        case 3:
            ReverseNumber();
            break;
        case 4:
            Fibonacci();
            break;
        case 5:
            DrawTriangle();
            break;
        case 6:
            return 0;
        default:
            cout << "\nTry again.\n";
        }
        if (Retry(continued) == true)
            continue;
        else if (Retry(continued) == false)
            break;
    }
    return 0;
}