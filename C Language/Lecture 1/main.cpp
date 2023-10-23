#include <iostream>
#include <ctime>
using namespace std;

class ATM {
private:
    int pin;
    int startingBalance;
    int currentBalance;

public:
    ATM() : pin(12345), startingBalance(60000), currentBalance(20000) {}

    // Display the welcome screen with date and time
    void displayWelcomeScreen() {
        time_t now = time(0);
        char* date = ctime(&now);
        cout << "Welcome to Our Bank ATM" << endl;
        cout << "Current Date and Time: " << date;
    }

    // Check ATM PIN (1 attempt only)
    bool checkATMPin() {
        int enteredPin;
        cout << "Enter your ATM PIN: ";
        cin >> enteredPin;
        return enteredPin == pin;
    }

    // Display the help screen
    void displayHelpScreen() {
        cout << "This is a simple ATM application. Please enter your ATM PIN to proceed." << endl;
    }

    // Display the main menu
    void displayMenu() {
        cout << "\nMain Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
    }

    // Deposit money and update the balance
    void depositMoney() {
        int amount;
        cout << "Enter the amount to deposit: Rs. ";
        cin >> amount;
        currentBalance += amount;
        cout << "Deposit successful. Current Balance: Rs. " << currentBalance << endl;
    }

    // Withdraw money and update the balance
    void withdrawMoney() {
        int amount;
        cout << "Enter the amount to withdraw: Rs. ";
        cin >> amount;
        if (amount <= currentBalance) {
            currentBalance -= amount;
            cout << "Withdrawal successful. Current Balance: Rs. " << currentBalance << endl;
        } else {
            cout << "Withdrawal unsuccessful. Insufficient funds." << endl;
        }
    }

    // Display the account balance
    void checkBalance() {
        cout << "Current Balance: Rs. " << currentBalance << endl;
    }
};

int main() {
    ATM atm;

    atm.displayWelcomeScreen();

    int choice;
    cout << "Enter your choice (1 for ATM Pin, 2 for Help): ";
    cin >> choice;

    if (choice == 1) {
        if (atm.checkATMPin()) {
            atm.displayMenu();

            int menuChoice;
            cout << "Enter your choice: ";
            cin >> menuChoice;

            switch (menuChoice) {
                case 1:
                    atm.checkBalance();
                    break;
                case 2:
                    atm.depositMoney();
                    break;
                case 3:
                    atm.withdrawMoney();
                    break;
                case 4:
                    cout << "Exiting ATM. Have a nice day!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Exiting..." << endl;
            }
        } else {
            cout << "Incorrect ATM PIN. Exiting..." << endl;
        }
    } else if (choice == 2) {
        atm.displayHelpScreen();
    } else {
        cout << "Invalid choice. Exiting..." << endl;
    }

    return 0;
}

