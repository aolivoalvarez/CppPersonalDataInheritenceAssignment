
#ifndef PersonData_H
#define PersonData_H
#include <string> //strings
using namespace std; //std

class PersonData {
private: //private vars
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

public:

	PersonData() { //blank constructor

	}

	PersonData(string last, string first, string addy, string c, string s, string z, string p) { //constructor with all vars
		lastName = last;
		firstName = first;
		address = addy;
		city = c;
		state = s;
		zip = z;
		phone = p;
	}
	//getter and setters
	void setLastName(string last) {
		lastName = last;
	}

	string getLastName() {
		return lastName;
	}

	void setFirstName(string first) {
		firstName = first;
	}

	string getFirstName() {
		return firstName;
	}

	void setAddress(string addy) {
		address = addy;
	}

	string getAddress() {
		return address;
	}

	void setCity(string c) {
		city = c;
	}

	string getCity() {
		return city;
	}

	void setState(string s) {
		state = s;
	}

	string getState() {
		return state;
	}

	void setZip(string z) {
		zip = z;
	}

	string getZip() {
		return zip;
	}

	void setPhone(string p) {
		phone = p;
	}

	string getPhone() {
		return phone;
	}
};
#endif
