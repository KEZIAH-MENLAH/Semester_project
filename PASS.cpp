
#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> passwords;

int main() {
    int choice;
    string website, password;

    while (true) {
        cout << "1. Add password\n";
        cout << "2. Get password\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter website: ";
                cin >> website;
                cout << "Enter password: ";
                cin >> password;
                passwords[website] = password;
                cout << "Password added successfully!\n";
                break;
            
            case 2:
                cout << "Enter website: ";
                cin >> website;
                if (passwords.count(website) > 0) {
                    cout << "Password: " << passwords[website] << "\n";
                } else {
                    cout << "Password not found!\n";
                }
                break;
            
            case 3:
                cout << "Goodbye!\n";
                return 0;
            
            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    }

    return 0;
}



