#include "ATM.h"
#include <iostream>
#include <ctime>
using namespace std;

ATM::ATM() {
    atmPin = 12345;
    accountBalance = 60000;
}

void ATM::displayWelcomeScreen() {
    time_t now = time(0);
    char* date = ctime(&now);
    cout << "Welcome to Our Bank ATM" << endl;
    cout << "Current Date and Time: " << date;
}

bool ATM::checkATMPin() {
    int attempts = 1;
    int enteredPin;
    cout << "Enter your ATM PIN: ";
    cin >> enteredPin;
    
    if (enteredPin == atmPin) {
        return true;
    } else {
        return false;
    }
}

void ATM::displayMenu() {
    cout << "\nMain Menu:" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
}

void ATM::displayBalance() {
    cout << "Current Balance: Rs. " << accountBalance << endl;
}

void ATM::deposit() {
    int amount;
    cout << "Enter the amount to deposit: Rs. ";
    cin >> amount;
    updateBalance(amount);
    cout << "Deposit successful. Current Balance: Rs. " << accountBalance << endl;
}

void ATM::withdraw() {
    int amount;
    cout << "Enter the amount to withdraw: Rs. ";
    cin >> amount;
    if (amount > accountBalance || amount <= 0) {
        cout << "Withdrawal unsuccessful. Insufficient funds or invalid amount." << endl;
    } else {
        updateBalance(-amount);
        cout << "Withdrawal successful. Current Balance: Rs. " << accountBalance << endl;
    }
}

void ATM::displayHelp() {
    cout << "This is a simple ATM application. Please enter your ATM PIN to proceed." << endl;
}

void ATM::updateBalance(int amount) {
    accountBalance += amount;
}

