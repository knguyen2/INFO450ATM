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