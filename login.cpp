#include <iostream>
#include <fstream>
#include <cstring>  // For strcmp
using namespace std;

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

// File stream
char username[100], email[100], password[100], confirm[100];
fstream storage;
bool signin = false;

void SignUp() {
    storage.open("storage_us.txt", ios::app);
    if (!storage.is_open()) {
        cout << "Error opening file. Can't open file." << endl;
        return;
    }

    cout <<RED<< "================================================" << endl;
    cout <<BLUE<< "Enter your username   : "; cin >> username;
    cout <<BLUE<< "Enter your email      : "; cin >> email;
    cout <<BLUE<< "Enter your password   : "; cin >> password;
    cout <<BLUE<< "Confirm your password : "; cin >> confirm;
    cout <<RED<< "================================================" << endl;

    // Check if passwords match
    if (strcmp(password, confirm) != 0) {
        cout <<RED<< "Passwords do not match!" << endl;
        storage.close();
        return;
    }

    // Write to file
    storage << username << " " << email << " " << password << endl;
    storage.close();
    cout <<GREEN<< "Sign Up Successfully!" << endl;
}

void SignIn() {
    storage.open("storage_us.txt", ios::in);
    if (!storage.is_open()) {
        cout <<RED<< "Error opening file. Can't open file." << endl;
        return;
    }

    char stored_username[100], stored_email[100], stored_password[100];
    char new_email[100], new_password[100];

    cout <<MAGENTA<< "================================================" << endl;
    cout <<BLUE<< "Enter your email      : "; cin >> new_email;
    cout <<BLUE<< "Enter your password   : "; cin >> new_password;
    cout <<MAGENTA<< "================================================" << endl;

    // Read from file
    while (storage >> stored_username >> stored_email >> stored_password) {
        if (strcmp(stored_email, new_email) == 0 && strcmp(stored_password, new_password) == 0) {
            signin = true;
            strcpy(username, stored_username); // Store the username
            break;
        }
    }

    storage.close();

    if (signin) {
        cout <<GREEN<< "Sign In Successfully! Welcome, Mr. " << username << endl;
    } else {
        cout <<RED<< "Invalid password or email!" << endl;
    }
}
int main() {
    int choice;
    cout << YELLOW << "1. Sign Up\n2. Sign In\nChoose an option: " << RESET;
    cin >> choice;cin.ignore();  // Ignore leftover newline character
    if (choice == 1) {
        SignUp();
    } else if (choice == 2) {
        SignIn();
    } else {
        cout << RED << "Invalid option!" << RESET << endl;
    }
    return 0;
}