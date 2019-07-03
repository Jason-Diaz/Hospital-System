/*
*	Pharmacy class has the price of five types of medications.
*	It also provides an update for the charges variable of the PatientAccount.
*/

#include "stdafx.h"
#include "Pharmacy.h"


	// pos0 = daraprim, pos1 = epipens, pos2 = harvoni, pos3 = sovaldi, pos4 = epclusa
	int medicationCharges[6] = { 0, 750, 600, 87800, 73800, 73300 };

	// accepts a refference to a patients account and the position of medication according to the menu and array
	int Pharmacy::getCharge(int posOfMedicationCharge) {
		return medicationCharges[posOfMedicationCharge];
	}

	void Pharmacy::medicationsToScreen() {
		std::cout << "1 - Daraprim	$750" << std::endl;
		std::cout << "2 - Epipens	$600" << std::endl;
		std::cout << "3 - Harvoni	$87800" << std::endl;
		std::cout << "4 - Solvaldi	$73800" << std::endl;
		std::cout << "5 - Epclusa	$73300" << std::endl;
		return;
	}