/*
Topics Covered:  console input & output,  loops  and  conditional statements

Functional Requirements:
You work for a progressive bank that is installing ATMs which will deliver withdrawals in  multiple bill denominations: $50, $20, $10, $5 and $1
Write a program that determines number of bills to return with a withdrawal request.
Your program should start by  requesting the user to enter the amount to withdrawn
The amount entered should be validated
Withdraws must be > $1.00
Withdrawals cannot be > $300.00
If the  Amount is not valid then the user will be asked to re-enter until a valid number is entered.
After a valid number is entered  the # of each bill type should be determined and presented, optimizing for the fewest number of bills
E.g.  Withdrawal of $200 should be 4 x $50.00  (versus 20  x $10 bills)
#  $50.00 bills
# $20.00 bills
# $10.00 bills
# $5.00 bills
# $1.00 bills
Only show the amount if the number of bills is  >  0
e.g   do not show :   0  $50.00 bills
After presenting the change, the program should allow the use to enter another transaction
The program should continue accepting input and making change until the user enters  ‘0’ to quit.

_____________________

Non Functional Requirements
Your program should be properly commented, clearly indicating what the program is doing
Your program should employ the use at least 2 loops (you choose: for or while or do-while)
	one that loops until a valid input is entered
	one that loops to allow for additional withdrawals
DO not use GOTOs

Submission Requirements
You  should upload your program to your github account  in a repository called:  INFO450ATM
Turn in your project on blackboard by uploading the URL to your github repository
*/

/*	
	Assignment 01
	Author: Kim Nguyen 
	Date: Thursday, September 20, 2018  
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

				cout << " Your $" << withdraw << " withdrawl then breaks down to: " << endl << endl;;
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
	cout << " Ending your ATM transaction.  Thank you for using the service!" << endl;			
	cout << endl;
	system("pause");
	return 0;
}