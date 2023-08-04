/* Investment Table */
#include <iostream>
#include <iomanip> //for io manipulation//
#include <cmath> //for the pow function//
using namespace std;

int main() {
    //Not essential to declare constants but makes the program more flexible.
  const int YEAR_MIN = 5;
  const int YEAR_MAX = 30;
  const int YEAR_INCR = 5;
  const int rate_max = 10;
    
  int year;
  double flat_rate,compound_rate, balance;
  double initial_balance;

  cout << "Enter initial investment amount:";
  cin >> initial_balance;
  /* print table header */
  cout << right << setw(10) << "Rate";
  for (year=YEAR_MIN; year<=YEAR_MAX; year=year+YEAR_INCR){   
     cout << setw(4) << year << " years";
    }
     cout << "\n";
     //To print numbers with 2 decimal places
     cout << fixed << setprecision (2);
     
     //Now up to you to create the body of the table; don't forget the left margin ...
  for(flat_rate=5.00;flat_rate<=rate_max;flat_rate=flat_rate+0.5){
  cout << right << setw(10) << flat_rate;
    
   for (year=YEAR_MIN; year<=YEAR_MAX; year=year+YEAR_INCR){
  //calculation of compounded interest rate
  compound_rate=pow(1+(flat_rate/100),year);
  //interest and initial balance combined   
  balance=initial_balance*compound_rate;
     
  cout << setw(10)<< balance<<" ";
    }
    cout<<endl;
  }
 
    return 0;
}