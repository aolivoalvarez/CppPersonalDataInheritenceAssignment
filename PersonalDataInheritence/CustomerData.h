#ifndef CustomerData_H
#define CustomerData_H
#include <string> //strings
using namespace std; //std
#include "PersonData.h"; //person data class

class CustomerData : public PersonData { //inheriting from person data
	
private: //private vars
	string customerNumber; 
	bool mailingList;

public:

	CustomerData() { //blank constructor

	}

	CustomerData(string first, string last, string address, string city, string state, string zip, string phone, string custNum, bool list) { //constructor with all vars
		PersonData(first, last, address, city, state, zip, phone);
		customerNumber = custNum;
		mailingList = list;
	}
	//getters and setters
	void setCustomerNumber(string custNum) {
		customerNumber = custNum;
	}

	string getCustomerNumber() {
		return customerNumber;
	}

	void setMailingList(bool list) {
		mailingList = list;
	}

	bool getMailingList() {
		return mailingList;
	}
};
#endif
