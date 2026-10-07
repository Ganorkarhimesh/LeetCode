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


    return 0; 
}