#pragma once
#include "iostream"
using namespace std;

/*
*	PatientAccount class keeps a total of the patient's charges.
*	It also keeps track of the number of days spent in the hospital.
*	The hospital's daily rate is $2000.
*/

class PatientAccount
{
public:

	// Constructor
	PatientAccount();

	void setDaysStayed(int);
	void chargeForSurgery(int);

	void chargeForMedication(int);

	void surgeriesToScreen();

	void medicationsToScreen();

	void calculateCharge();

	void chargeToScreen();


};