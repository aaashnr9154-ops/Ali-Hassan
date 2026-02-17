#include<iostream>
using namespace std;
void intputMarks(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter marks: ";
		cin >> arr[i];
	}
}
void displayMarks(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << "\n";
	}
}

void highestMark(int arr[], int size)
{
	int l = arr[0];
	for(int i = 0; i < size; i++)
	{
		if(arr[i] > l)
		{
			l =arr[i];
		}
	}
	cout << "Highest Mark: " << l << endl;
}

void lowestMark(int arr[], int size)
{
	int s = arr[0];
	for(int i = 0; i < size; i ++)
	{
		if(arr[i] < s)
		{
			s = arr[i];
		}
	}
	cout << "Lowest Mark: " << s << endl;
}

void averageMarks(int arr[], int size)
{
	float sum;
	for(int i= 0; i < size; i++)
	{
		sum += arr[i];
	}
//	float average = ;
	cout << "Average Marks: " << sum / size << endl;
}

void searchMark(int arr[], int size, int key)
{
	bool flag = false;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == key)
		{
			flag = true;
			break;
		}
	}
	if(flag)
	{
		cout << "Found" << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}
}

void updateMark(int arr[], int size)
{
	int olddata, newdata;
	cout << "Enter old marks: ";
	cin >> olddata;
	
	cout << "Enter new marks to update: ";
	cin >> newdata;
	bool flag = false;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == olddata)
		{
			arr[i] = newdata;
			flag = true;
			break;
		}
	}
	if(flag)
	{
		cout << "Marks updated" << endl;	
	}
	else
	{
		cout << "No record found";
	}
}
int main()
{
	int choice, size;
	cout << "Enter size: ";
	cin >> size; 
	int arry[size];
	while(choice != 8)
	{
		cout << "\n===== Student Marks Management System =====" << endl;
		cout << "1. Enter Marks " << endl;
		cout << "2. Display Marks " << endl;
		cout << "3. Show Highest Marks " << endl;
		cout << "4. Show Lowest Marks " << endl;
		cout << "5. Show Average Marks " << endl;
		cout << "6. Search a Marks " << endl;
		cout << "7. Update a Marks " << endl;
		cout << "8. Exit " << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				{
					intputMarks(arry, size);
					break;
				}
			case 2:
				{
					displayMarks(arry, size);
					break;
				}
			case 3:
				{
					highestMark(arry, size);
					break;
				}
			case 4:
				{
					lowestMark(arry, size);
					break;
				}
			case 5:
				{
					averageMarks(arry, size);
					break;
				}
			case 6:
				{
					int key;
					cout << "Enter marks to be search: ";
					cin >> key;
					searchMark(arry, size, key);
					break;
				}
			case 7:
				{
					updateMark(arry, size);
					break;
				}
			case 8:
				{
					break;
				}
			default:
			{
				cout << "Invalid choice";
				break;
			}
		}	
	}
}
