#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    //Declare the variables to store input and to store year end total amount, interest amount, and interest earned for the entire year
    double initialInvestment;
    double monthlyDeposit;
    double interestRate;
    int numberOfYears;
    int months, years;
    //you have to declare the variables to store year end total amount, interest, and year end interest
    double totalAmount; 
    double interestAmount; 
    double interestEarnedThisYear;


    //Display information to the user
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: \n";
    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n";


    //Get the data from the user
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: $";
    cin >> initialInvestment;
    cout << "Monthly Deposit: $";
    cin >> monthlyDeposit;
    cout << "Annual Interest: %";
    cin >> interestRate;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12;

    

    //Set the total amount to initial investment 
    totalAmount = initialInvestment;

    //Display balance without monthly deposits
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";


    for (int i = 0; i < years; i++) {

        //Calculate yearly interest
        interestAmount = (totalAmount) * ((interestRate / 100));

        //Calculate year end total
        totalAmount = totalAmount + interestAmount;

        //Print the results to table, shows only two decimal points
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << interestAmount << "\n";

    }

    //Set the total amount to initial investment 
    totalAmount = initialInvestment;

    //Display balance with monthly deposits
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < years; i++) {

        //Set the yearly interest to zero at the beginning of the year
        interestEarnedThisYear = 0;

        for (int j = 0; j < 12; j++) {

            //Calculating the monthly interest
            interestAmount = (totalAmount + monthlyDeposit) * ((interestRate / 100) / 12);

            //Calculating the month end interest
            interestEarnedThisYear = interestEarnedThisYear + interestAmount;

            //Calculating the month end total
            totalAmount = totalAmount + monthlyDeposit + interestAmount;

        }

        //Print results to table showcasing only two decimal places
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << interestEarnedThisYear << "\n";


    }

    return 0;
}
