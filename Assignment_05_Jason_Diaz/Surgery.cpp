/*
*	Surgery class stores the charges for five types of surgery.
*	It also provides an update for the charges variable of the PatientAccount.
*/

#include "stdafx.h"
#include "Surgery.h"

	// pos0 = appendectomy, pos1 = cSection, pos2 = kneeReplacment, pos3 = hipReplacement, pos4 = bypass
	int surgeryCharges[6] = { 0, 13910, 15240, 25398, 26297, 75345 };

	// accepts the position of surgery according to the menu and array
	int Surgery::getCharge(int posOfSurgeryCharge) {

		return surgeryCharges[posOfSurgeryCharge];

	}

	void Surgery::surgeriesToScreen() {
		std::cout << "1 - Appendectomy		$13,910" << std::endl;
		std::cout << "2 - C Section			$15,240" << std::endl;
		std::cout << "3 - Knee Replacement		$25,398" << std::endl;
		std::cout << "4 - Hip replacement		$26,297" << std::endl;
		std::cout << "5 - Bypass			$75,345" << std::endl;
		return;
	}