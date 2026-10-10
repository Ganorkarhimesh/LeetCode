#include <iostream>

int main() {
    double AccountBalance;
    std::cout << "Enter Account Balance:- ";
    std::cin >> AccountBalance ;

    double TransactionAmount;
    std::cout << "Enter Transaction Amount:- ";
    std::cin >> TransactionAmount ;

    int FailedAttempts;
    std::cout << "Enter Failed Attempts:- ";
    std::cin >> FailedAttempts;

    int TransactionHour ;
    std::cout << "Enter Transaction Hour(0-23):- ";
    std::cin >> TransactionHour;

    int NewDevice;  
    std::cout << "Enter New Device(1=Yes, 0=No):- ";
    std::cin >> NewDevice;

    int InternationalTransaction;
    std::cout << "Enter International Transaction(1=Yes, 0=No):- ";
    std::cin >> InternationalTransaction;

    double RemainingBalance = AccountBalance - TransactionAmount ;

    if (TransactionAmount > AccountBalance)
    {
        // Insufficient Balance;
    }
    else if (FailedAttempts >= 3)
    {
        // High Risk
    }
    else if (NewDevice == 1 && TransactionAmount >= 30000)
    {
        // High Risk
    }
    else if (InternationalTransaction == 1 && TransactionAmount >= 25000)
    {
        //  High Risk
    }
    else if (TransactionAmount >= 50000)
    {
        // Medium Risk
    }
    else if (TransactionHour >= 0 && TransactionHour <= 5)
    {
        // Medium Risk
    }
    else {
        // Low Risk
    }

    std::cout << "\n===== DIGITAL TRANSACTION RISK ENGINE =====\n";

    if (TransactionAmount > AccountBalance) {
        std::cout << "Risk Level: NOT EVALUATED\n";
        std::cout << "Transaction Status: BLOCKED\n";
        std::cout << "Reason: INSUFFICIENT BALANCE\n";
    }
    else if (FailedAttempts >= 3) {
        std::cout << "Risk Level: HIGH RISK\n";
        std::cout << "Transaction Status: BLOCKED\n";
    }
    else if (NewDevice == 1 && TransactionAmount >= 30000) {
        std::cout << "Risk Level: HIGH RISK\n";
        std::cout << "Transaction Status: BLOCKED\n";
    }
    else if (InternationalTransaction == 1 && TransactionAmount >= 25000) {
        std::cout << "Risk Level: HIGH RISK\n";
        std::cout << "Transaction Status: BLOCKED\n";
    }
    else if (TransactionAmount >= 50000) {
        std::cout << "Risk Level: MEDIUM RISK\n";
        std::cout << "Transaction Status: REVIEW REQUIRED\n";
    }
    else if (TransactionHour >= 0 && TransactionHour <= 5) {
        std::cout << "Risk Level: MEDIUM RISK\n";
        std::cout << "Transaction Status: REVIEW REQUIRED\n";
    }
    else {
        std::cout << "Risk Level: LOW RISK\n";
        std::cout << "Transaction Status: APPROVED\n";
    }

    std::cout << "Account Balance: " << AccountBalance << "\n";
    std::cout << "Transaction Amount: " << TransactionAmount << "\n";

    if (TransactionAmount <= AccountBalance) {
        std::cout << "Remaining Balance: " << RemainingBalance << "\n";
    }
    else {
        std::cout << "Remaining Balance: Not Applicable\n";
    }

    std::cout << "===========================================\n";

    return 0; 
}