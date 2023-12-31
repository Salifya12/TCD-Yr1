/**
* Week 3 - Finding Net Pay
* See detailed specification on Blackboard in Week 3
* Task 1 - calculations only
*/
#include <cmath>
#include <string> //not needed for task 1
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Use these constants in your calculations. 
  //These allow easy changes to rates, etc. when there is a change in policy, etc.
  const double BASIC_HOURS = 35;//hours above this is overtime
	const double OTIME_MULT = 1.5;//the multiplier for overtime hours
	const double TAX_RATE = 0.20;//all pay is taxed at 20%
	const double PRSI_RATE = 0.025;//PRSI is 2.5% of gross pay

	//Declare all the variables as doubles ...
	double hourly_rate, hours, credit, gross_pay, net_pay,tax;
  double prsi;
  

	//Read in the values
	//All inputs entered on one line, one prompt only
	cout << "Enter hours, hourly rate, tax credit:";
	          // etc...
  cin >> hours >> hourly_rate >> credit;


	//Calculate the gross pay
	//To pass test 3, adjust the following to arrange for gross_pay to include overtime pay...
  //gross_pay = (hours * hourly_rate);
 if (hours<=BASIC_HOURS){
  gross_pay=hours*hourly_rate;
   }
  if (hours>BASIC_HOURS) {
    gross_pay=(35*hourly_rate)+(hours-BASIC_HOURS)*(hourly_rate*OTIME_MULT);
}
  
	//Calculate the deductions based on the gross pay
	//calculate tax ...
tax = gross_pay*TAX_RATE;
  prsi= gross_pay*PRSI_RATE;


	//apply the tax credit (to pass tests 4 & 5) ...
	if (credit<tax){
    tax=tax-credit;
  }
   if (credit>=gross_pay*TAX_RATE){
    tax=0;
  }
  //calculate PRSI ...



	//calculate net_pay after deductions ...
  net_pay = gross_pay-(tax+prsi);



	//Print out the main details
	cout << "Gross:" << gross_pay << " Tax:" << tax << " PRSI:" << prsi;
	cout << " Net:" << net_pay << endl;

	return 0;
   
   }