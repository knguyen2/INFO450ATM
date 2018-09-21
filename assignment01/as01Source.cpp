/*
#include <iostream>
using namespace std;

//Program to determines number of bills to return with a withdrawal request 

int main()
{
	//local variable declariation
	int withdrawalAmount;
	int i = 0;
	int billValue_50 = 50;
	int billValue_20 = 20;
	int billValue_10 = 10;
	int billValue_5 = 5;
	int billValue_1 = 1;

	//FRIST do-while Loop condition making sure a valid input is entered
	do {
		//Empty line
		cout << " " << endl;

		//Ask user to enter a withdrawal amount
		cout << " Enter an ammount you wish to withdraw" << endl;
		cout << " Enter 0 to quit" << endl;
		cin >> withdrawalAmount;

		//Separating the amount entered from the number of bills with an empty line
		cout << " " << endl;

		//Execution STOPS when user hit 0
		if (withdrawalAmount == 0)
			break;

		//SECOND (inner) for Loop condition allowing user to enter another transation 'till user enter a 0
		for (i = withdrawalAmount - 1; i >= 1; i--)
		{
			if (withdrawalAmount % i == 0)
			{
				//Determining # of bills to return 

			}
		}
		if (i == 1)
			return 0;


	} while (withdrawalAmount > i);

	cin.get();
	//cin.get();
	return 0;

}
*/

#include <iostream>
using namespace std;


int main()
{
	char answer = 'Y';
	double withdraw = 0;
	int balance, Fifties, Twenties, Tens, Fives, Ones;

	cout << "" << endl;
	cout << " Hello valued customer!" << endl << endl;
	cout << " Are you looking to withdraw from this ATM machine? Let me help!" << endl;
	cout << "" << endl;
	cout << " ***** Please remember: This ATM machine can only handle withdrawl of at least $1 and no more than $300 ***** " << endl;
	cout << "" << endl;
	cout << " ======================================================== " << endl;
	cout << "" << endl;

	// Initiates a while loop to verify user selection to withdraw more funds after the initial withdrawal.
	while (answer == 'Y' || answer == 'y')			
	{
		do
		{
			cout << " Please enter the amount you wish to withdraw: $";
			cin >> withdraw;
			cout << "" << endl;

			if (withdraw <= 300 && withdraw >= 1) // Checks whether the user's value to withdraw is within the allowed withdrawl range
			{
				cout << " You've chosen to withdraw $" << withdraw << endl;
				cout << "" << endl;

				// Calculates the amount of dollars dispense based on user's input
				Fifties = withdraw / 50;		  
				balance = withdraw - (Fifties * 50);
				Twenties = balance / 20;
				balance = balance - (Twenties * 20);
				Tens = balance / 10;
				balance = balance - (Tens * 10);
				Fives = balance / 5;
				balance = balance - (Fives * 5);
				Ones = balance / 1;
				balance = balance - (Ones * 1);

				cout << " Your withdrawl then breaks down to: " << endl << endl;;
				cout << "" << endl;
				cout << "\t =======================";
				cout << "" << endl;

				// nested if condition to cycle through each type of bill and returns the amount of bills if the value exceeds $0
				if (Fifties >= 1)				
				{
					cout << "\n\t You have " << Fifties << " $50 bills: " << endl;
				}

				if (Twenties >= 1)
				{
					cout << "\n\t You have " << Twenties << " $20 bills: " << endl;
				}

				if (Tens >= 1)
				{
					cout << "\n\t You have " << Tens << " $10 bills: " << endl;
				}

				if (Fives >= 1)
				{
					cout << "\n\t You have " << Fives << " $5 bills: " << endl;
				}

				if (Ones >= 1)
				{
					cout << "\n\t You have " << Ones << " $1 bills: " << endl;
				}
				cout << "\n\t =======================" << endl;
			}
			else
			{
				cout << " Invalid amount entered.  Remember? The minimum withdraw is $1.00 & the maximum is $300.00.  Please try again :) " << endl;
				cout << "" << endl;
			}
		}
		while (withdraw == 0);

		cout << endl;
		cout << " Would you like to perform another withdrawal? Enter Y to continue, or enter N to end ---> ";	// Asks the user to make a selection on whether to do another transaction
		cin >> answer;
		cout << "" << endl;
		cout << " ========================================================" << endl;
		cout << "" << endl;
	}

	// Exits the program if 'n' or 'N' is entered
	cout << " Ending your transaction!  Thank you for using the service ^.^" << endl;			
	cout << endl;
	system("pause");
	return 0;
}