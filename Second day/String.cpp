#include <iostream>
#include <string>
using namespace std;

void Selection(int &sel)
{
    cout << "Selection: \n";
    cin >> sel;
}

void ShowMenu()
{
    cout << "\n-------------------------------------------\n";
    cout << "String\n";
    cout << "1. Show string\n";
    cout << "2. Length of string\n";
    cout << "3. Check symmetry\n";
    cout << "4. Check x in string\n";
    cout << "5. Convert\n";
    cout << "6. Exit\n";
    cout << "\n-------------------------------------------\n";
}

void ShowString()
{
    cout << "We are the so-called \"Vikings\" from the north.";
}

void InputChar(char c[100])
{
    cout << "\nEnter a string: ";
    cin.getline(c, 100);
    cout << "String: " << c << endl;
}

void InputString(string &s)
{
    cout << "\nEnter a string: ";
    getline(cin, s);
    cout << "String: " << s << endl;
}

void CheckLength(char c[])
{
    int length = 0, i = 0;
    while (c[i] != '\0')
    {
        length++;
        i++;
    }
    cout << "\nLength of the string: " << length << endl;
}

void CheckSymmetry(string s)
{
    int n = s.size();
    bool check = true;
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }
    if (check == false)
        cout << "\nChuoi khong doi xung.";
    else
        cout << "\nChuoi doi xung.";
}

void CheckXInString(string s)
{
    int count = 0;
    char x;
    cout << "\nNhap ky tu muon tim: ";
    cin >> x;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == x)
            count++;
    }
    if (count == 0)
        cout << "\nKy tu khong co trong chuoi.";
    else
        cout << "\nKy tu " << x << " co trong chuoi " << count << " lan.";
}

void Convert(string s)
{
    cout << "\nChuyen chuoi thanh chu viet thuong: ";
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    cout << s;
    //-------------------
    cout << "\nChuyen chuoi thanh chu viet hoa: ";
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    cout << s;
    //---------------------
    cout << "\nChuyen chuoi thanh chu viet hoa chu cai dau cua moi tu: ";
    for (int i = 0; i < s.size(); i++)
    {
        s[0] = toupper(s[0]);
        if (s[i - 1] == ' ')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
    cout << s;
}

int main()
{
    char c[100];
    char conti;
    string s;
    int sel;
    while (true)
    {
        ShowMenu();
        Selection(sel);
        switch (sel)
        {
        case 1:
            ShowString();
            break;
        case 2:
            cin.ignore();
            InputChar(c);
            CheckLength(c);
            break;
        case 3:
            cin.ignore();
            InputString(s);
            CheckSymmetry(s);
            break;
        case 4:
            cin.ignore();
            InputString(s);
            CheckXInString(s);
            break;
        case 5:
            cin.ignore();
            InputString(s);
            Convert(s);
            break;
        case 6:
            return 0;
        default:
            cout << "Try again: ";
        }
        cout << "\nDo you want continue (y/n)?\n";
        cin >> conti;
        if (conti == 'n')
        {
            cout << "End.\n";
            break;
        }
        else if (conti == 'y')
        {
            cout << "Restart.\n";
        }
        else
        {
            cout << "Try again: ";
            cin >> conti;
        }
    }
}