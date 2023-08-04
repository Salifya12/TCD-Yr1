#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

const string SENTINEL = "X0000";

//Ideally use constants for all fixed charges values, and for free mins etc.
const double REG_FIXED_FEE = 10.00;
const int REG_FREE_MINS = 50;
const double REG_FEE_PER_MIN = 0.20;
const double P_FIXED_FEE=25.00;
const int P_OFF_FREE_MINS=100;
const int P_PK_FREE_MINS=75;
const double P_OFF_MINS_FEE=0.05;
const double P_PK_MINS_FEE=0.10;
/// etc..


void read (string& cust_name,double& balance,char& cust_code,int& peak_mins,int& off_mins);
//does not handle the account number because this has to be read separately to allow sentinel to be noticed before this function is called
//if code is "R" one of the parameters is not used

double reg_charge (int mins);
//Computes charge for regular service accounts

double prem_charge (int peak_mins, int off_mins);
//Computes charges for premium service accounts

void print_bill (string cust_acc,string cust_name,char cust_code,double charge,double balance);

int main()
{
    string acc,name;
    char code;
    int mins1, mins2;
    double bal, tot;

  cout << setw(8) << "Account" << setw(15) << "Name" << setw(11) << "Act. Type" << setw(10) << "Charge" << setw(10) << "Balance" << endl;

    cin >> acc; // prepare for sentinel loop
    while (acc!=SENTINEL)
    {
      read(name,bal,code,mins1,mins2);
      if(code=='R')
      {
        tot=reg_charge(mins1);
      }
      else
      tot=prem_charge(mins1,mins2);
                
   //repeatedly, if not finished, read the rest of the record, compute charges, 
   //print and prepare for the next round of the loop
      bal=bal+tot;
    print_bill(acc, name, code, tot, bal);
      cin>>acc;
    }



  
    
    return 0;
}	
    
void read (string& cust_name ,double& balance ,char& cust_code ,int& peak_mins ,int& off_mins) 
{
//read in the data for one record,//does not handle the account number because this 
//has to be read separately to allow sentinel to be noticed before this function is called
//if code is "R" one of the parameters is not used
  cin>>cust_name>>balance>>cust_code>>peak_mins;
 
  if(cust_code=='R'){
    off_mins=0;
  }
  else cin>>off_mins;
}     
//Define a function to compute and return the fee for the regular service and used minutes
double reg_charge (int mins)
{
  double fee = REG_FIXED_FEE;
  if(mins>REG_FREE_MINS){
    fee=fee+(mins-REG_FREE_MINS)*REG_FEE_PER_MIN;
  }  
  return fee;
}
  
double prem_charge (int peak_mins, int off_mins) {
//Computes charges for premium service accounts
	double total = P_FIXED_FEE;
  
	//now add on fees for the used minutes
if(peak_mins>P_PK_FREE_MINS)
{
  total=total+(peak_mins-P_PK_FREE_MINS)*P_PK_MINS_FEE;
  
}
if(off_mins>P_OFF_FREE_MINS)
{
  int charged_mins=off_mins-P_OFF_FREE_MINS;
  total=total+(charged_mins*P_OFF_MINS_FEE);
}  
  
	return total;
}

void print_bill (string cust_acc,string cust_name,char cust_code,double charge,double balance) 
{
	cout << fixed << showpoint << setprecision (2);
	//copy setw numbers from the header in main 
  
 cout << setw(8) << cust_acc << setw(15) << cust_name;
   if(cust_code=='R')
 {
   cout<<setw(11) <<"Regular";
 }
  if(cust_code=='P')
  {
   cout<<setw(11) <<"Premium"; 
  }
  
  cout<< setw(10) << charge<< setw(10) << balance<< endl;
	//print only one of the following, depending on the code
  
}
