
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    char letter = 'E';
    cout << letter + 5 << endl;


    string name = "Eric";

    // adding above the integer max gives garbage 
    int number = 2147483647;
    int anotherNumber = 10;

    // this is garbage
    int result = number + anotherNumber;
   
    cout << result << endl;

    int firstNumber = 2;
    int secondNumber = 7;

    cout << "The result of " << secondNumber << "divided by"
        << firstNumber << "is: " << secondNumber / firstNumber
        << endl; 

    int pretendNumberWithADecimal = 4.2;

    cout << pretendNumberWithADecimal << endl;

    double actualNumberWithADecimal = 4.2;
    cout << actualNumberWithADecimal << endl;


    cout << actualNumberWithADecimal * 1.1 << endl;
    cout << actualNumberWithADecimal / 2 << endl;
    cout << actualNumberWithADecimal + 2 << endl;
    cout << actualNumberWithADecimal * 3 / 2 + 7.0 / 2 << endl;
    cout << actualNumberWithADecimal * 3 / 2 + 7.0 / 2 << endl;
    
    // modulus - integer remainder of division 
    int remainder = 7 % 2; 

    number = 7;
    
    cout << "Enter your first number: ";
    cin >> firstNumber; 

    cout << "Enter your second number: ";
    cin >> secondNumber;

    cout << firstNumber << " + " << secondNumber << " = "
        << firstNumber + secondNumber << endl; 

    cout << firstNumber << " - " << secondNumber << " = "
        << firstNumber - secondNumber << endl;

    cout << firstNumber << " * " << secondNumber << " = "
        << firstNumber * secondNumber << endl;

    cout << firstNumber << "/ " << secondNumber << " = "
        << firstNumber / secondNumber << endl;
    
    
    double wage;
    cout << "Enter your hourly wage: ";
    cin >> wage;
   
    double hoursPerWeek;
    cout << "Enter your average hours worked in a week: ";
    cin >> hoursPerWeek;

    const int WEEKS_WORKED_PER_YEAR = 50;

    const double TAX = .15;

    double yearlySalary = wage * hoursPerWeek * WEEKS_WORKED_PER_YEAR;
    cout << "Your Annual Salary is: $" << yearlySalary << endl;
    cout << "Your salary after taxes is: $" << yearlySalary * (1-TAX)  << endl;

    double yearlySalaryAfterTax = yearlySalary * (1 - TAX);

    int monthlyRent;
    cout << "Enter your monthly rent: ";
    cin >> monthlyRent;

    cout << "After paying rent, you have $ " << 
        yearlySalaryAfterTax - monthlyRent * 12 << endl;
    
    int carPayment;
    int carInsurance;
    int phoneBill;
    int healthInsurance;
    int gymMembership;
    int ulilities;

    cout << "Enter your car payment: ";
    cin >> carPayment;

    cout << "Enter your car insurance: ";
    cin >> carInsurance;

    cout << "Enter your phone bill : ";
    cin >> phoneBill;

    cout << "Enter your health insurance : ";
    cin >> healthInsurance;

    cout << "Enter your gym membership : ";
    cin >> gymMembership;

    cout << "Enter your ulilities : ";
    cin >> ulilities;

    int yearlyOtherExpenses = (carPayment + carInsurance + phoneBill + healthInsurance + gymMembership + ulilities + monthlyRent) * 12;

    cout << "after paying all your bills, not including food $" <<
        yearlySalaryAfterTax - yearlyOtherExpenses; 
    
    return 0;
}

