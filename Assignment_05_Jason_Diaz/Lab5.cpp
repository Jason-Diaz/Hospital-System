// Lab5.cpp : Defines the entry point for the console application.
// Jason Diaz


#include "stdafx.h"
#include "PatientAccount.h"
#include "iostream"
using namespace std;

/* main: a menu that allows the user to enter a type of surgery,
*  enter one or more types of medication, and check the patient out of the hospital.
*  When the patient checks out, the total charges is displayed.
*/
int main()
{
	PatientAccount account;
	int userInput = 0;
	bool looper = true;


	do {
		// Home menu
		std::cout << "		Group 3 Hospital" << std::endl;
		std::cout << "Enter one of the following menu choices:" << std::endl;
		std::cout << "1	-	charge for surgery" << std::endl;
		std::cout << "2	-	charge for medication" << std::endl;
		std::cout << "3	-	check patient out" << std::endl;
		std::cout << "0	-	exit program\n" << std::endl;
		std::cin >> userInput;

		switch (userInput) {
		case 1: // charge for surgery
			cout << "\nEnter a corresponding value for one of the following surgeries:" << endl;
			account.surgeriesToScreen();
			cin >> userInput;
			if (userInput > 0 && userInput < 6) {
				account.chargeForSurgery(userInput);
			}

			break;
		case 2: // charge for medication
			do {
				// sub-menu
				cout << "\nEnter a corresponding value for one of the following medications:" << endl;
				account.medicationsToScreen();
				cin >> userInput;

				if (userInput > 0 && userInput < 6) {
					account.chargeForMedication(userInput);
					cout << "Enter 1 if you would like to add another medication, otherwise 0" << endl;
					cin >> userInput;

					if (userInput == 0) {
						looper = false;
						userInput = 1; // to bring us back to the main menu
					}
				}
			} while (looper);

			break;
		case 3: // check patient out
			std::cout << "\nEnter how many days the patient has stayed in care?" << endl;
			std::cin >> userInput;
			account.setDaysStayed(userInput);
			cout << "\nThe Patient has been checked out" << endl;
			account.chargeToScreen();
			userInput = 0;
		}
	} while (userInput != 0); // if 0 is entered, the program is exited
	system("pause");
	return 0;
}

