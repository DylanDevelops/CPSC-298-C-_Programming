/** 
 * Full Name: Dylan M. Ravel
 * Student ID: 2445987
 * Chapman Email: ravel@chapman.edu
 * Course Number and Section: CPSC-298-13
 * Assignment or Exercise Number: Programming Assignment 2
*/

// Includes library for input and output
#include <iostream>

// Using namespace std as it doesn't conflict with other libraries in this simple file
using namespace std;

// Declares the two dynamically allocated arrays
string* names = new string[100];
unsigned long* phoneNumbers = new unsigned long[100];

// Adds a contact to the names array and phoneNumbers array
bool addContact(string name, unsigned long phoneNumber) {
    // loop through names
    for(int i = 0; i < 100; ++i) {
        // does that name already exist?
        if(names[i] == name) {
            // update the person's phone number
            phoneNumbers[i] = phoneNumber;
            return false;
        }
    }

    // else
    for(int i = 0; i < 100; ++i) {
        // find a new spot with no name or number
        if(names[i] == "" && phoneNumbers[i] == 0) {
            // add them to that spot
            names[i] = name;
            phoneNumbers[i] = phoneNumber;
            return true;
        }
    }

    // if the arrays are full return false
    return false;
}

// Searches through the names array and returns the phone number associated
unsigned long searchContact(string name) {
    // loop through names
    for(int i = 0; i < 100; ++i) {
        // if name == name
        if(names[i] == name) {
            // return number at that index
            return phoneNumbers[i];
        }
    }
    
    // the specified name does not exist
    return 0;
}

// Displays the contacts in the arrays to the console
void displayContacts() {
    // loop through all numbers
    cout << "All Contacts: " << endl;
    for(int i = 0; i < 100; ++i) {
        // Checks if a number exists at the given location
        if(names[i] != "" && phoneNumbers[i] != 0) {
            // print name and number
            cout << "\t" << names[i] << ":\t" << to_string(phoneNumbers[i]) << endl;
        }
    }
}

// The main method which is responsible for doing everything
int main(int argc, char** argv) {
    // The message that is printed to the console regarding the menu
    const string menu = "\n\n------------------------------\n"
        "Please select the number from the following options:\n"
        " 1) Add contact\n 2) Search contact\n"
        " 3) Display all contacts\n 4) Quit\n"
        "------------------------------\n\n";

    // The variable to keep track of the user selection
    int inputOption;

    // values that can be used in the do while statement
    string tempName = "";
    unsigned long tempNumber = 0;

    // Executes while the user wants to keep running the program
    do {
        cout << menu << endl;
        cout << "Your choice: ";
        cin >> inputOption;
        cin.ignore();

        switch(inputOption) {
            case 1:
                // asks and gets input name
                cout << "What is the new contact's name?" << endl;
                cout << "Name: ";
                getline(cin, tempName);

                // Asks and gets input number
                cout << "What is the new contact's number?" << endl;
                cout << "Number: ";
                cin >> tempNumber;
                cin.ignore();

                // adds the contact and gets the result
                if(addContact(tempName, tempNumber)) {
                    // returned true
                    cout << "Successfully added new contact!" << endl;
                } else {
                    // returned false
                    cout << "Failed to add new contact!" << endl;
                }

                // resets usage variables
                tempName = "";
                tempNumber = 0;
                break;

            case 2:
                // asks the user and gets input name
                cout << "What is the contact's name?" << endl;
                cout << "Name (case sensitive): ";
                getline(cin, tempName);

                // searches for the contact and returns the result
                tempNumber = searchContact(tempName);

                if(tempNumber != 0) {
                    // found a contact
                    cout << "Found Contact!" << endl;
                    cout << tempName << ": " << to_string(tempNumber) << endl;
                } else {
                    // Did not find a contact
                    cout << "No contact found for \"" << tempName << "\"" << endl;
                }

                // resets temp variables
                tempName = "";
                tempNumber = 0;
                break;

            case 3:
                // calls the display contacts method
                displayContacts();
                break;

            case 4:
                // Exits the program
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Not a valid option, please try again!" << endl;
                break;
        }
    } while(inputOption != 4); // Runs as long as their response is not 4

    // Deletes the allocated memory
    delete[] phoneNumbers;
    delete[] names;
}