
/**
* Week 3 - Finding Net Pay
*
* Task 2 - Formatted output
*
* Copy the body of your solution to task 1 in here. Then arrange to
* (1) read a multipart name from the rest of the line of input e.g. given input "35 15 0 Michael McConnell" the name is "Michael McConnell".
* (2) format output, using fixed, showpoint, setprecision, setw, left, right, etc. to produce output exactly like this, 30 characters per line:
Name         Michael McConnell
Hours                    35.00
Hourly rate              15.00
Gross wage              525.00
Tax @ 20%               105.00
PRSI @ 2.5%              13.12
------------------------------
Net pay                 406.88
*
*/
#include<cmath>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double BASIC_HOURS = 35;
	const double OTIME_MULT = 1.5;
  const double TAX_RATE = 0.20;
	const double PRSI_RATE = 0.025;
	double hourly_rate, hours, credit, gross_pay, net_pay,tax;
  double prsi;
  string name;
  
  
	cout << "Enter hours, hourly rate, tax credit, name:";
  cin >> hours >> hourly_rate >> credit;
  getline (cin, name);
  

 if (hours<=BASIC_HOURS){
  gross_pay=hours*hourly_rate;
   }
  if (hours>BASIC_HOURS) {
    gross_pay=(35*hourly_rate)+(hours-BASIC_HOURS)*(hourly_rate*OTIME_MULT);
}

tax = gross_pay*TAX_RATE;
  prsi= gross_pay*PRSI_RATE;

	if (credit<tax){
    tax=tax-credit;
  }
   if (credit>=gross_pay*TAX_RATE){
    tax=0;
  }

  net_pay = gross_pay-(tax+prsi);

  cout<<endl;
	cout<< setw (11) <<left <<"Name"<< setw (19)<< right<< name<<endl;
  cout<< fixed << setprecision(2);
  cout<< setw (11) <<left <<"Hours"<< setw(19)<<right<< hours<<endl;
  
  cout<< setw(11)<<"Hourly rate"<<setw(19)<<right<<hourly_rate<<endl;
  
  cout<<setw (11)<<left<<"Gross wage"<<setw (19)<<right<<gross_pay<<endl;
  
  cout<< setw(11)<<left<<"Tax @ 20%"<<setw(19)<<right<<tax<<endl; 
  
  cout<<setw(11)<<left<<"PRSI @ 2.5%" <<setw (19)<<right<<prsi<<endl;

  cout<<"------------------------------"<<endl;
  cout<<showpoint;
  
	cout <<setw (11)<<left<<"Net pay"<<setw (19)<<right<<net_pay<< endl;



	return 0;
}
