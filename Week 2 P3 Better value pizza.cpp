//5 points of 20 for this week
//Indicate which pizza is better value
//Complete this program so that the if statement provided will print "FIRST", "SECOND or "SAME" as appropriate.
//Reuse your previous ppsi code
#include <iostream>
using namespace std;

int main() {
 //declare variables ...
  double const pi=3.1415;
  double diameter1, area1, price1, radius1, diameter2, radius2, area2, price2, ppsi1, ppsi2;

  //read in data
  cout << "Enter the diameter and price of the first pizza:";
  cin >> diameter1;
  cin >> price1;
  //similarly for second pizza ...
  cout << "Enter the diameter and price of the second pizza:";
  cin >> diameter2;
  cin >> price2;
  //compute ppsi1 and ppsi2...
  radius1=(diameter1)/2;
  radius2=(diameter2)/2;

  area1=pi*(radius1*radius1);
  area2=pi*(radius2*radius2);
  
  ppsi1=price1/area1;
  ppsi2=price2/area2;
  //workout and print the answer
  if (ppsi1 < ppsi2) {
    cout << "FIRST";
  }
  else if (ppsi1 > ppsi2) {
    cout<<"SECOND";
    //...
  } else {
    cout<<"SAME";
    //...
  }

  cout << endl;
  
  return 0;
}