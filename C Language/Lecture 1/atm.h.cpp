#ifndef ATM_H
#define ATM_H

class ATM {
public:
    ATM();
    void displayWelcomeScreen();
    bool checkATMPin();
    void displayMenu();
    void displayBalance();
    void deposit();
    void withdraw();
    void displayHelp();

private:
    int atmPin;
    int accountBalance;

    void updateBalance(int amount);
};

#endif
