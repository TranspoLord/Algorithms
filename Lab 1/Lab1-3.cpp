//============================================================================
// Name        : Lab1-3.cpp
// Author      : Anthony See
// Version     : 1.0
// Copyright   : Copyright © 2017 SNHU COCE
// Description : Lab 1-3 Up to Speed in C++
//============================================================================

#include <algorithm>
#include <iostream>

using namespace std;

//============================================================================
// Global definitions visible to all methods and classes
//============================================================================

// FIXME (1): Define a data structure to hold bid information together as a single unit of storage.
struct bid {
	string bidName;
	string fundReciever;
	string viNum;
	double bidAmount;
};

// FIXME (4): Display the bid values passed in data structure
/**
 * Display the bid information
 *
 * @param ?type? data structure containing the bid info
 */
void displayBid(bid name) {
    cout << "Title: " << name.bidName << endl;
    cout << "Fund: " << name.fundReciever << endl;
    cout << "Vehicle: " << name.viNum << endl;
    cout << "Bid Amount: " << name.bidAmount << endl;

    return;
}

// FIXME (3): Store input values in data structure
/**
 * Prompt user for bid information
 *
 * @return data structure containing the bid info
 */
bid getBid() {
    bid newBid;

    cout << "Enter title: ";
    cin.ignore();
    getline(cin, newBid.bidName);

    cout << "Enter fund: ";
    cin >> newBid.fundReciever;

    cout << "Enter vehicle: ";
    cin.ignore();
    getline(cin, newBid.viNum);

    cout << "Enter amount: ";
    cin.ignore();
    string strAmount;
    getline(cin, strAmount);
    newBid.bidAmount = strToDouble(strAmount, '$');

    return newBid;
}

/**
 * Simple C function to convert a string to a double
 * after stripping out unwanted char
 *
 * credit: http://stackoverflow.com/a/24875936
 *
 * @param ch The character to strip out
 */
double strToDouble(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return atof(str.c_str());
}


/**
 * The one and only main() method
 */
int main() {

    // FIXME (2): Declare instance of data structure to hold bid information
	bid curBid;

    // loop to display menu until exit chosen
    int choice = 0;
    while (choice != 9) {
        cout << "Menu:" << endl;
        cout << "  1. Enter Bid" << endl;
        cout << "  2. Display Bid" << endl;
        cout << "  9. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // FIXME (5): Complete the method calls then test the program
        switch (choice) {
            case 1:
            	curBid = getBid();
                break;
            case 2:
                displayBid(curBid);
                break;
        }
    }

    cout << "Good bye." << endl;

    return 0;
}
