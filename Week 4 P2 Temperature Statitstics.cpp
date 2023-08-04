//Compute statistics for temperature data - see lab sheet
//Sample Input:DUBAIRPORT 10.5 6.5 5.0 -3.5 -4.0 7.5 3.0 -999
//Output:DUBAIRPORT -4.0 10.5 3.6
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () 
{
   //declare variables ...
  string stn;
  double n, sum, temp, avg, max, min;
  
   //NB Don't prompt for input!!
   //read the station name ...
     cin >> stn;    
   //read the first temeprature ...
     cin >> temp;
    //initialise variables ...
    sum=0;
    n=0;
    max=temp;
    min=temp;
   // ... the loop ...
  if(temp==-999){
    cout<< stn<< " ";
    cout<<"NO DATA";
  }
  else{
    while(temp!=-999){
       if(temp>max)
        max=temp;
      else if(temp<min)
        min=temp;
      sum=temp+sum;
      n++;
      cin >> temp;
      }
   //decide what to output ...
  
  avg=sum/n;
  
    cout<<fixed<<setprecision(1);
  cout << stn<<" ";
  cout <<min <<" "<<max <<" ";
  cout<< " "<<avg;
    }
   return 0;
}