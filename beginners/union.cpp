#include <iostream>
#include <cstring>
using namespace std;

union personal_details {
    char name[50];
    int user_id;
};

int main() {
    int number = 0, choice = 0;
    cout << "Enter the number of persons to be added: ";
    cin >> number;

    personal_details* pd = new personal_details[number];

    for (int i = 0; i < number; i++) {
        cout << "Enter name: ";
        cin.ignore();  // Clear the input buffer
        cin.getline(pd[i].name, 50);
        cout << "Enter user ID: ";
        cin >> pd[i].user_id;
    }

    cout << "Which information do you need to access?\n";
    cout << "1. Username\n2. UserID\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < number; i++) {
            // Switch to name to read it properly
            char temp_name[50];
            strcpy(temp_name, pd[i].name);  // Save the name to a temporary variable
            cout << temp_name << endl;
        }
    } else if (choice == 2) {
        for (int i = 0; i < number; i++) {
            cout << pd[i].user_id << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    delete[] pd;  // Clean up the dynamically allocated memory
    return 0;
}
