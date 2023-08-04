//Program to determine how many months it takes to pay off a loan. See lab sheet.
/* Sample:: Loan amount:1500
      Monthly payment:50
      36 months.
      292.31 euro total interest.
      42.31 euro final payment.     */
#include <iostream>
#include <cmath>
#include <iomanip> //for fixed and setprecision
using namespace std;

int main() {
   const double ANNUAL_RATE = 12; 
   double loan_amount, monthly_payment;
   double monthly_rate = (ANNUAL_RATE/12.0)/100;//to give a monthly multiplier
   //declare more variables ...
int no_months;
double total_interest, interest, final_payment;
   //get input
   cout << "Loan amount:";
   cin >> loan_amount;
   
   cout << "Monthly payment:";
   cin >> monthly_payment;
  
  //initialise variables ...
  no_months=1;
  interest=loan_amount*monthly_rate;
  total_interest=interest;
  final_payment=loan_amount+interest;
   //set up how the output looks
  cout << fixed << setprecision (2);
   //use a loop to see how long repayment takes and track interest ...
   while(monthly_payment<=final_payment){
     loan_amount=(final_payment-monthly_payment);
     interest=loan_amount*monthly_rate;
     final_payment=loan_amount+interest;
     total_interest=total_interest+interest;
     no_months++;
   }
   //compute final payment ...
   
   //output the three values, one per line ...
   cout << no_months << " months.\n";
   cout << total_interest << " euro total interest.\n";
   cout << final_payment <<  " euro final payment.\n";

   return 0;
   }