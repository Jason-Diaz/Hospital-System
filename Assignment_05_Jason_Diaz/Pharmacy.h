/*
*	Pharmacy class has the price of five types of medications.
*	It also provides an update for the charges variable of the PatientAccount.
*/

#pragma once
#include "iostream"
using namespace std;

class Pharmacy
{

public:
	// accepts a refference to a patients account and the position of medication according to the menu and array
	int getCharge(int);
	void medicationsToScreen();
};
