/*
*	Surgery class stores the charges for five types of surgery.
*	It also provides an update for the charges variable of the PatientAccount.
*/

#pragma once
#include "iostream"
using namespace std;

class Surgery
{
public:
	// accepts the position of surgery according to the menu and array
	int getCharge(int);
	void surgeriesToScreen();
};