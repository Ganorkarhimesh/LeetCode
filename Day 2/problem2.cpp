#include <iostream>

int main() {
    const char*AccountHolder = "Himesh"; 
    int Age = 20;
    int AccountNumber = 12345;
    double initialbalance = 5000.50;
    double MoneyDeposit = 2500.75;
    double MoneyWithdrawn = 1200.25;
    char AccountType = 'S';
    int AccountActive = 1;
    
    int FinalBalance = initialbalance + MoneyDeposit - MoneyWithdrawn;
    
    std::cout << "===== BANK ACCOUNT =====\n" ;
    std::cout << "Account Holder: " << AccountHolder << "\n";
    std::cout << "Age: " << Age << "\n";
    std::cout << "Account Number: " << AccountNumber << "\n";
    std::cout << "Account Type: " << AccountType << "\n";
    std::cout << "Initial Balance: " << initialbalance << "\n";
    std::cout << "Deposit: " << MoneyDeposit << "\n";
    std::cout << "Withdrawal: " << MoneyWithdrawn << "\n";
    std::cout << "Final Balance : " << FinalBalance << "\n";
    std::cout << "Account Active : " << AccountActive << "\n"; 
    std::cout << "========================";

    return 0;
}

/*
Problem: Mini Bank Account

Ek student ke bank account ki information program mein store karo.

Given data:
Account holder: Himesh
Age: 20
Account number: 12345
Initial balance: 5000.50
Money deposited: 2500.75
Money withdrawn: 1200.25
Account type: S
Account active: 1
Output:- 
===== BANK ACCOUNT =====
Account Holder: Himesh
Age: 20
Account Number: 12345
Account Type: S
Initial Balance: 5000.50
Deposit: 2500.75
Withdrawal: 1200.25
Final Balance: 6301.00
Account Active: 1
========================
*/