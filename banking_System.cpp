#include <iostream>
#include <iomanip>
using namespace std;

double balance = 0.0;
void checkBalance()
{
    cout << fixed << setprecision(2);
    cout << "\nCurrent Balance: Rs." << balance << endl;
}
void depositMoney()
{
    double amount;
    cout << "Enter Deposit Amount: Rs. ";
    cin >> amount;
    if (amount > 0)
    {
        balance += amount;
        cout << "Deposit successful!" << endl;
        checkBalance();
    }
    else
    {
        cout << "Invalid deposit amount!" << endl;
    }
}
void withdrawMoney()
{
    double amount;
    cout << "Enter withdrawal amount: Rs." << endl;
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid withdrawal amount!" << endl;
    }
    else if (amount > balance)
    {
        cout << "Insufficient balance!" << endl;
    }
    else
    {
        balance -= amount;
        cout << "Withdrawal Successful!" << endl;
        checkBalance();
    }
}
int main()
{
    int choice;
    do
    {
        cout << "\n===== BANKING SYSTEM ======" << endl;
        cout << "1.Check Balance" << endl;
        cout << "2.Deposit Money" << endl;
        cout << "3.Withdraw Money" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter Your choice" << endl;
        cin >> choice;
        switch (choice)
        {

        case 1:
            checkBalance();
            break;
        case 2:
            depositMoney();
            break;
        case 3:
            withdrawMoney();
            break;
        case 4:
            cout << "Thank You For using our Banking System!" << endl;
            break;

        default:
            cout << "Invalid Choice! Try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
