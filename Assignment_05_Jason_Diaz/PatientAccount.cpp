/*
*	PatientAccount class keeps a total of the patient's charges.
*	It also keeps track of the number of days spent in the hospital.
*	The hospital's daily rate is $2000.
*/

#include "stdafx.h"
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"

	const int dailyRate = 2000;

	Surgery surgery; //surgery object 
	Pharmacy pharmacy; // pharmacy object

	
	int daysStayed;
	int charges;
	
	// Constructor setting default variables to zero
	PatientAccount::PatientAccount() {
		daysStayed = 0;
		charges = 0;
	}

	// updates daysStayed with accepted integer
	void PatientAccount::setDaysStayed(int days) {
		daysStayed = days;
		return;
	}

	// adds the charge for surgery from the Surgery class to the patients charges
	void PatientAccount::chargeForSurgery(int posOfSurgeryCharge) {
		charges += surgery.getCharge(posOfSurgeryCharge);
		return;
	}

	// adds the charge for medication from the Pharmacy class to the patients charges
	void PatientAccount::chargeForMedication(int posOfMedicationCharge) {
		charges += pharmacy.getCharge(posOfMedicationCharge);
		return;
	}

	// displays surgeries that are avaliable from the Surgery class
	void PatientAccount::surgeriesToScreen() {
		surgery.surgeriesToScreen();
		return;
	}

	// displays medications that are avaliable from the Pharmacy class
	void PatientAccount::medicationsToScreen() {
		pharmacy.medicationsToScreen();
		return;
	}

	// multiplies the amount of days stayed by the daily rate and add it to the patients charges
	void PatientAccount::calculateCharge() {
		charges += daysStayed * dailyRate;
		return;
	}

	// displays the total charge of a patient
	void PatientAccount::chargeToScreen() {
		calculateCharge();
		std::cout << "Total charge is: $" << charges << std::endl;
		return;
	}

