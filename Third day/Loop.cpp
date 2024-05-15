#include <iostream>
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

void Fibonacci()
{
    cout << "How many numbers you want print?";
    int number;
    cin >> number;
    int Fibo_1 = 0, Fibo_2 = 1;
    cout << Fibo_1 << " " << Fibo_2;
    for (int i = 2; i <= number; i++)
    {
        cout << Fibo_1 + Fibo_2 << " ";
        }
}

void DrawRectangle()
{
}

void Retry()
{
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
            DrawRectangle();
            break;
        case 6:
            return 0;
        default:
            cout << "\nTry again.\n";
        }
        Retry();
    }
}