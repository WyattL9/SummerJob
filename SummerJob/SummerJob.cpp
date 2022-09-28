// Wyatt Lester
// Date:08/31/22
// Program Title: Summer Job Calculator
// Program Description:Calculates a weekly wage given an hourly payrate, a number of hours, and a number of different things the user needs to pay 

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
const double TAX = .15;


int main()
{

	// Variable declaration
	double wage, rate, hours, shop, entertainment, savings;
	string name; 

	//Program title and description for the user
	cout << "Program Title: Summer Job Calculator" << endl;
	cout << "Calculates a weekly wage given an hourly payrate, a number of hours, and a number of different things the user needs to pay" << endl << endl;

	// User input
	
	cout << "What is your full name?" << endl;
	getline(cin, name);
	cout << endl;

	cout << "What is your hourly payrate?" << endl;
	cin >> rate;
	cout << endl;

	cout << "How many hours do you work a week?" << endl;
	cin >> hours;
	cout << endl;

	cout << "What percentage are you putting into shopping? (ex. 20% would be .2)" << endl;
	cin >> shop;
	cout << endl;

	cout << "What percentage are you putting into entertainment? (ex. 20% would be .2)" << endl;
	cin >> entertainment;
	cout << endl;
	
	cout << "What percentage are you putting into savings? (ex. 20% would be .2)" << endl;
	cin >> savings;
	cout << endl;

	// Calculations
	wage = hours * rate;

	// Output to the screen
	cout << fixed << setprecision(2);
	cout << setw(20) << left << "Name:"<< "$" << setw(7) << right << name << endl;
	cout << setw(20) << left << "Wage:" << "$" << setw(7) << right << wage << endl;
	cout << setw(20) << left << "Tax:" << "$" << setw(7) << right << wage * TAX<< endl;
	cout << setw(20) << left << "Shopping:" << "$" << setw(7) << right << wage * shop << endl;
	cout << setw(20) << left << "Entertainment:" << "$" << setw(7) << right << wage * entertainment << endl;
	cout << setw(20) << left << "Savings:" << "$" << setw(7) << right << wage * savings<< endl;
	cout << setw(20) << left << "Remaining:" << "$" << setw(7) << right << wage - (wage*TAX) - (wage*shop) - (wage*entertainment) - (wage*savings) << endl;

	return 0;
}