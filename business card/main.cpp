/*
 * George Strauch
 * business card
 * 2/3/2017
 */


#include <iostream>
#include <string>
using namespace std;

int main() {
    string fname = "";
    string lname = "";
    string phoneNumber = "";

    cout << "please enter information for the business card \n First Name?" << endl;
    cin >> fname;
    cout << "Last Name?" << endl;
    cin >> lname;
    cout << "Phone Number[###-###-####]" << endl;
    cin >> phoneNumber;

    cout << "------------------------------------------------------" << endl;
    cout << "--BIG BUSINESS--" << endl;
    cout << fname << " " << lname << "\n" << phoneNumber << endl;
    cout << "------------------------------------------------------" << endl;

    return 0;
}