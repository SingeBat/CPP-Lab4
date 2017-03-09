#include <conio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool AddAnotherEmployee();

struct Employee
{
	int id;
	string firstname;
	string lastname;

	float payrate;
	int hours;
};

int main()
{
	vector<Employee> employees;
	int i = 0;
	float gross;
	float totalgross = 0;
	do
	{
		employees.push_back(Employee());

		cout << "Add an Employee" << endl;
		cout << "Employee ID: ";
		cin >> employees[i].id;
		cout << "First Name: ";
		cin >> employees[i].firstname;
		cout << "Last Name: ";
		cin >> employees[i].lastname;
		cout << "Payrate: ";
		cin >> employees[i].payrate;
		cout << "Hours Worked: ";
		cin >> employees[i].hours;
		i++;



	} while (AddAnotherEmployee());

	cout << "Press any key to view report." << endl;
	_getch();
	

	
	for (unsigned int it = 0; it < employees.size(); it++)
	{ 
		gross = employees[it].hours * employees[it].payrate;

		cout <<"Employee ID: "<< employees[it].id<<"   Name: "<< employees[it].firstname <<" "<< employees[it].lastname <<"   Gross Pay: "<<"$"<< gross << endl;

		totalgross = totalgross + gross;
	
	}
	cout << "Gross pay for all combined employees: $" << totalgross;


	_getch();
	return 0;
}


bool AddAnotherEmployee()
{

	char in = '\0';//  \0 is null character
	while (in != 'y' && in != 'n' && in != 'Y' && in != 'N')
	{
		cout << "Would you like to add another employee?(y/n)" << endl;
		cin >> in;
	}

	return (in == 'y' || in == 'Y');
}