/*Alexis Olivo
ITSE-2331 2801
24 April 2022
Design a class named PersonData with the following member variables:

lastName

firstName

address

city

state

zip

phone

Write the appropriate accessor and mutator functions for these member variables.

Next, design a class named CustomerData, which is derived from the PersonData class. The CustomerData class should have the following member variables:

customerNumber

mailingList

The customerNumber variable will be used to hold a unique integer for each customer. The mailingList variable should be a bool. It will be set to true if the customer wishes to be on a mailing list, or false if the customer does not wish to be on a mailing list. Write appropriate accessor and mutator functions for these member variables. Demonstrate an object of the CustomerData class in a simple program.


 */

#include <iostream> //input output
#include <string> //string
#include "CustomerData.h"; //customer data class
using namespace std;

void displayCustData(CustomerData cust) {
    cout << "First Name: " << cust.getFirstName();
    cout << "\nLast Name: " << cust.getLastName();
    cout << "\nAddress: " << cust.getAddress();
    cout << "\nCity: " << cust.getCity();
    cout << "\nState: " << cust.getState();
    cout << "\nZip Code: " << cust.getZip();
    cout << "\nPhone Number: " << cust.getPhone();
    cout << "\nCustomer Number: " << cust.getCustomerNumber();
    cout << "\nAre they on the mailing list?: " << cust.getMailingList();
}

int main()
{
    //variables
    string first;
    string last;
    string address;
    string city;
    string state;
    string zip;
    string phone;
    string custNum;
    bool mailList;

    //getting user input
    cout << "Please enter the customer's first name: ";
    getline(cin, first);

    cout << "\nPlease enter the customer's last name: ";
    getline(cin, last);

    cout << "\nPlease enter the customer's address: ";
    getline(cin, address);

    cout << "\nPlease enter the customer's city: ";
    getline(cin, city);

    cout << "\nPlease enter the customer's state: ";
    getline(cin, state);

    cout << "\nPlease enter the customer's zip code: ";
    getline(cin, zip);

    cout << "\nPlease enter the customer's phone number: ";
    getline(cin, phone);

    cout << "\nPlease enter the customer's unique number: ";
    getline(cin, custNum);

    cout << "\nIf the customer would like to be on the mailing list, enter true. If not, enter false:  ";
    cin >> mailList;

    //calling constructor
    CustomerData customer(first, last, address, city, state, zip, phone, custNum, mailList);

    //displaying info
    displayCustData(customer);
}

