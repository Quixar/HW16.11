#include <iostream>
#include <windows.h>
using namespace std;

struct Check
{
    char name[100];
    int amount;
    double price;
    double discount;
};

void FillCheck(Check& check)
{
    cout << "Product name: ";
    cin.getline(check.name, sizeof(check.name));

    cout << "Amount: ";
    cin >> check.amount;

    cout << "Price: ";
    cin >> check.price;

    cout << "Discount: ";
    cin >> check.discount;
}

void PrintCheck(Check& check)
{

    cout << "------------------------\n";
    cout << "         CHECK\n";
    cout << "------------------------\n";
    cout << "Product: " << check.name << "\n";
    cout << "Amount: " << check.amount << "\n";
    cout << "Price: $" << check.price << "\n";
    cout << "Discount: $" << check.discount << "\n";
    cout << "------------------------\n";
    cout << "Total: $"  << (check.amount * check.price - check.discount) << "\n";
    cout << "------------------------\n";
}

int main()
{
    Check check;

    FillCheck(check);

    system("cls");
    
    PrintCheck(check);

    Sleep(INFINITE);
}
