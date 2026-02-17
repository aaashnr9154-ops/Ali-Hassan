#include<iostream>
#include<string>
using namespace std;


void addEmployee(int n, int Employee_id[], string Employee_name[], float Employee_salary[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		cout << "$    Enter " << (i + 1) << " Employee Detail    $" << endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n" << endl;
		
		cout << "Enter Employee ID: ";
		cin >> Employee_id[i];
		
		cout << "Enter Employee Name: ";
		cin.ignore();
		getline(cin, Employee_name[i]);
		
		cout << "Enter Employee Basic Salary: ";
		cin >> Employee_salary[i];
	}
}


void diplayEmployees(int n, int Employee_id[], string Employee_name[], float Employee_salary[])
{
	for(int i = 0; i < n; i++)
	{
		if(Employee_id[i] == 0 && Employee_salary[i] == 0)
		{
			cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "!    Please, Enter The Employees Detail First    !" << endl;
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		else
		{
			cout << "::::::::::::::::::::::::::::" << endl;
			cout << ":    Employee Number : " << (i + 1) << "    :" << endl;
			cout << "::::::::::::::::::::::::::::" << endl;
			
			cout << "Employee ID: " << Employee_id[i] << endl;
			cout << "Employee Name: " << Employee_name[i] << endl;
			cout << "Employee Salary: Rs " << Employee_salary[i] << "/-" << endl;
		}
	}
}


int searchEmployee(int n, int Employee_id[], string Employee_name[], float Employee_salary[])
{
	int empID;
	cout << "Enter Employee ID To Be Search: ";
	cin >> empID;
	
	for(int i = 0; i < n; i++)
	{
		if(Employee_id[i] == 0 && Employee_salary[i] == 0)
		{
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "!    Please, Enter The Employees Detail First    !" << endl;
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		else if(empID == Employee_id[i])
		{
			cout << "Employee Name --> " << Employee_name[i] << endl;
			return i + 1;
		}
	}
	
	cout << "\n=== ID Not Found ===" << endl;
	return 0;
}


void calculateBonus(int n, float bonus[], float Employee_salary[], string Employee_name[], int Employee_id[])
{
	for(int i = 0; i < n; i++)
	{
		if(Employee_id[i] == 0 && Employee_salary[i] == 0)
		{
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "!    Please, Enter The Employees Detail First    !" << endl;
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		else 
		{
			if(Employee_salary[i] >= 50000)
			{
				cout << "\nBonus For Employee --> " << Employee_name[i] << endl;
				bonus[i] = Employee_salary[i] * 0.10;
				cout << "Bonus: " << bonus[i] << endl;
			}
			else if(Employee_salary[i] >= 30000)
			{
				cout << "\nBonus For Employee --> " << Employee_name[i] << endl;
				bonus[i] = Employee_salary[i] * 0.07;
				cout << "Bonus: " << bonus[i] << endl;
			}
			else
			{
				cout << "\nBonus For Employee --> " << Employee_name[i] << endl;
				bonus[i] = Employee_salary[i] * 0.05;
				cout << "Bonus: " << bonus[i] << endl;
			}
		}
	}
}


void calculatDeduction(int n, float deduction[], float Employee_salary[], string Employee_name[], int Employee_id[])
{
	for(int i = 0;i < n; i++)
	{
		if(Employee_id[i] == 0 && Employee_salary[i] == 0)
		{
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "!    Please, Enter The Employees Detail First    !" << endl;
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		else
		{
			if(Employee_salary[i] >= 50000)
			{
				cout << "\nDeductions For Employee --> " << Employee_name[i] << endl;
				deduction[i] = Employee_salary[i] * 0.05;
				cout << "Deduction: " << deduction[i] << endl;
			}
			else if(Employee_salary[i] >= 30000)
			{
				cout << "\nDeductions For Employee --> " << Employee_name[i] << endl;
				deduction[i] = Employee_salary[i] * 0.03;
				cout << "Deduction: " << deduction[i] << endl;
			}
			else
			{
				cout << "\nDeductions For Employee --> " << Employee_name[i] << endl;
				deduction[i] = Employee_salary[i] * 0.02;
				cout << "Deduction: " << deduction[i] << endl;
			}
		}
	}
}


void calculatNetSalary(int n, float netsalary[], float bonus[], float deduction[], string Employee_name[], float Employee_salary[], int Employee_id[])
{
	for(int i = 0; i < n; i++)
	{
		if(Employee_id[i] == 0 && Employee_salary[i] == 0)
		{
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "!    Please, Enter The Employees Detail First    !" << endl;
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		else
		{
			if(bonus[i] == 0 && deduction[i] == 0)
			{
				cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
				cout << "!    Please calculate bonus and deduction first    !" << endl;
				cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
				return;
			}
			else
			{
				cout << "\nNet Salary Of Employee --> " << Employee_name[i] << endl;
				netsalary[i] = Employee_salary[i] + bonus[i] - deduction[i];
				cout << "Salary: " <<  netsalary[i] << endl;
			}
		}
	}
}


void updateSalary(int n, float netsalary[], float Employee_salary[], int Employee_id[])
{
	int i = 0;
	if(Employee_id[i] == 0 && Employee_salary[i] == 0)
	{
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "!    Please, Enter The Employees Detail First    !" << endl;
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
	else
	{	
		for(int i = 0; i < n; i++)
		{
			Employee_salary[i] = netsalary[i];
		}
		cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		cout << "$    Salary Updated    $" << endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	}
}


void highestSalary(int n, string Employee_name[], float Employee_salary[], int Employee_id[])
{
	int index = 0;
	float high = Employee_salary[0];
	
		for(int i = 1; i < n; i++)
		{
			if(Employee_salary[i] > high)
			{
				high = Employee_salary[i];
				index = i;
			}
		}

	cout << "Employee Name --> " << Employee_name[index] << endl;
	cout << "Salary: Rs " << high << "/-" << endl;
}


void salaryReport(int n, string Employee_name[], float Employee_salary[], int Employee_id[])
{
	int i;
	if(Employee_id[i] == 0 && Employee_salary[i] == 0)
	{
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "!    Please, Enter The Employees Detail First    !" << endl;
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
	else
	{
		cout << "\n<------------------------------------------------------------------------------------------>" << endl;
		cout << "|                               ALL EMPLOYEE'S SALARY REPORT                               |" << endl;
		cout << "<------------------------------------------------------------------------------------------>" << endl;
		for(int i = 0; i < n; i++)
		{
			cout << "\nEmployee --> " << (i + 1) << endl;
			cout << "Name --> " << Employee_name[i] << endl;
			cout << "Slary --> Rs " << Employee_salary[i] << "/-)" << endl;
		}
	}
}


void exitSystem(int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
		cout << "&    Exiting The Salary System    &" << endl;
		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
		break;
	}
}


int main()
{
	int n;
	cout << "Enter Number Of Employees: ";
	cin >> n;
	
	int Employee_id[n] = {0};
	int empID;
	string Employee_name[n];
	float Employee_salary[n] = {0};
	float bonus[n] = {0};
	float deduction[n] = {0};
	float netsalary[n] = {0};
	
	int choice = 0;
	
	while(choice != 10)
	{
		cout << "\n*********************************" << endl;
		cout << "*    Employees Salary System    *" << endl;
		cout << "*********************************" << endl;
		cout << "1. Adding Employees Detail" << endl;
		cout << "2. Display Employees Detail" << endl;
		cout << "3. Searching Employee By ID" << endl;
		cout << "4. Calculating Bonus" << endl;
		cout << "5. Calculating Deduction" << endl;
		cout << "6. calculating Net Salary" << endl;
		cout << "7. Update Salary" << endl;
		cout << "8. Show Highest Salary of Employee" << endl;
		cout << "9. Show Salary Report Of All Employees" << endl;
		cout << "10. Exit" << endl;
		cout << "\nEnter Your Choice: ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				{
					cout << "\n????????????????????????????????????????????????" << endl;
					cout << "?    LET'S FULFILL THE DETAIL OF EMPLOYEE'S    ?" << endl;
					cout << "????????????????????????????????????????????????" << endl;
					addEmployee(n, Employee_id, Employee_name, Employee_salary);
					break;
				}
			case 2:
				{
					cout << "\n######################################" << endl;
					cout << "#    DISPLAYING EMPLOYEE'S DETAIL    #" << endl;
					cout << "######################################" << endl;
					diplayEmployees(n, Employee_id, Employee_name, Employee_salary);
					break;
				}
			case 3:
				{
					cout << "\n<----- EMPLOYEE TO BE SEARCHED ----->" << endl;
					cout << "Employee Number: " << searchEmployee(n, Employee_id, Employee_name, Employee_salary) << endl;
					break;
				}
			case 4:
				{
					cout << "\n<----- CALCULATED BONUS OF EMPLOYEE'S ----->" << endl;
					calculateBonus(n, bonus, Employee_salary, Employee_name, Employee_id);
					break;
				}
			case 5:
				{
					cout << "\n<----- CALCULATED DEDUCTION OF EMPLOYEE'S ----->" << endl;
					calculatDeduction(n, deduction, Employee_salary, Employee_name, Employee_id);
					break;
				}
			case 6:
				{
					cout << "\n<----- NETSALARYS OF EMPLOYEE'S ----->" << endl;
					calculatNetSalary(n, netsalary, bonus, deduction, Employee_name, Employee_salary, Employee_id);
					break;
				}
			case 7:
				{
					updateSalary(n, netsalary, Employee_salary, Employee_id);
					break;
				}
			case 8:
				{
					cout << "\n<----- HIGHEST SALARY IN EMPLOYEE'S ----->" << endl;
					highestSalary(n, Employee_name, Employee_salary, Employee_id);
					break;
				}
			case 9:
				{
					salaryReport(n, Employee_name, Employee_salary, Employee_id);
					break;
				}
			case 10:
				{
					exitSystem(n);
					break;
				}
			default:
				{
					cout << "<---------------------->" << endl;
					cout << "|    Invalid Choice    |" << endl;
					cout << "<---------------------->" << endl;
					break;
				}
		}
	}
}
