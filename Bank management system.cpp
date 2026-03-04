#include<iostream>
using namespace std;

int pin[100];
int balance[100];
string name[100];
int acc_no[100];

void createAcount(int pin[], int size, int acc_no[], int balance[], string name[])
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter Your Name: ";
        getline(cin >> ws, name[i]);

        cout << "Enter Your Pin: ";
        cin >> pin[i];

        cout << "Enter Balance: ";
        cin >> balance[i];

        cout << "Enter Account Number: ";
        cin >> acc_no[i];

        while(acc_no[i] < 10000 || acc_no[i] > 99999)
        {
            cout << "Invalid Account Number Please Enter Again: ";
            cin >> acc_no[i];
        }
    }
}

void displayAcount(int pin[], int size, int acc_no[], int balance[], string name[])
{
    for(int i = 0; i < size; i++)
    {
        cout << "\nAccount " << (i+1) << " Details:\n";
        cout << "Name: " << name[i] << endl;
        cout << "Pin: " << pin[i] << endl;
        cout << "Balance: " << balance[i] << endl;
        cout << "Account Number: " << acc_no[i] << endl;
    }
}

void depositeMoney(int pin[], int size, int acc_no[], int balance[], string name[])
{
	int deposite, check_accno;
	string user_name;
	
	cout << "Enter Amount To Deposite: ";
	cin >> deposite;
	
	cout << "Enter Acount Number To Which Deposite: ";
	cin >> check_accno;
	
	cout << "Enter Acount Holder Name: ";
	getline(cin >> ws, user_name);
	
	for(int i = 0; i < size; i++)
	{
		if(check_accno == acc_no[i] && user_name == name[i])
		{
			balance[i] += deposite;
			cout << "Deposite Successfully" << endl;
		}
	}
}

void withdrawalMoney(int pin[], int size, int acc_no[], int balance[], string name[])
{
	int Amount, check_accno;
	string user_name;
	
	cout << "Enter Amount To Withdrawal: ";
	cin >> Amount;
	
	cout << "Enter Acount Number From Which Withdraw: ";
	cin >> check_accno;
	
	cout << "Enter Acount Holder Name: ";
	cin.ignore();
	getline(cin, user_name);
	
	for(int i = 0; i < size; i++)
	{
		if(check_accno == acc_no[i] && user_name == name[i])
		{
			if(Amount <= balance[i])
			{
				balance[i] -= Amount;
				cout << "Withdrawal Done" << endl;
			}
			else
			{
				cout << "Insufficient Balance" << endl;
			}
		}
	}
}

void balanceCheck(int pin[], int size, int acc_no[], int balance[], string name[])
{
	int check_accno;
	string user_name;
	
	cout << "Enter Acount Number To Balance Check: ";
	cin >> check_accno;
	
	cout << "Enter Acount Holder Name: ";
	getline(cin >> ws, user_name);
	
	for(int i = 0; i < size; i++)
	{
		if(check_accno == acc_no[i] && user_name == name[i])
		{
			cout << "Initial Balance: " << balance[i] << endl;
		}
	}
}

void moneyTransfer(int pin[], int size, int acc_no[], int balance[], string name[])
{
	int Amount, accno, check_accno;
	string user_name, check_name;
	
	cout << "Enter Acount Number From Which Money Transfer: ";
	cin >> check_accno;
	
	cout << "Enter Acount Holder Name From Which Money Transfer: ";
	getline(cin >> ws, user_name);
	
	cout << "Enter Acount Number to Which Money Transfer: ";
	cin >> accno;
	
	cout << "Enter Acount Holder Name to Which Money Transfer: ";
	getline(cin >> ws, check_name);
	
	cout << "Enter Amount To Transfer: ";
	cin >> Amount;
	
	for(int i = 0; i < size; i++)
	{
		if(check_accno == acc_no[i] && user_name == name[i])
		{
			balance[i] -= Amount;
		}
		else if(accno == acc_no[i] && check_name == name[i])
		{
			balance[i] += Amount;
			cout << "Money Transfer Successfully" << endl;
		}
	}	
}

int main()
{
	int choice = 0, size;
	cout << "Enter size: ";
	cin >> size;
	
	while(choice != 7)
	{
		cout << "\n===== SIMPLE BANKING SYSTEM =====" << endl;
		cout << "1. Create Account" << endl;
		cout << "2. Display Acounts" << endl;
		cout << "3. Deposit Money" << endl;
		cout << "4. Withdraw Money" << endl;
		cout << "5. Balance check" << endl;
		cout << "6. Money Transfer" << endl;
		cout << "7. Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				{
					createAcount(pin, size, acc_no, balance, name);
					break;
				}
			case 2:
				{
					displayAcount(pin, size, acc_no, balance, name);
					break;
			 	}
			case 3:
				{
					depositeMoney(pin, size, acc_no, balance, name);
					break;
				}
			case 4:
				{
					withdrawalMoney(pin, size, acc_no, balance, name);
					break;
				}
			case 5:
				{
					balanceCheck(pin, size, acc_no, balance, name);
					break;
				}
			case 6:
				{
					moneyTransfer(pin, size, acc_no, balance, name);
					break;
				}
			case 7:
				{
					cout << "Exit, Thanks For Visiting!" << endl;
					break;
				}
			default:
				{
					cout << "Invalid Choice";
					break;
				}
		}
	}
}
