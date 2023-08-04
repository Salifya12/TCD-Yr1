//For 9 points
//Complete the following programme to convert fahrenheit to centigrade. 
//Sample interaction as follows:
//Enter fahrenheit temperature:212
//212 degrees fahrenheit is 100 degrees centigrade.
#include <iostream>
using namespace std;

int main () {
    double fht, cge;
    //Prompt for and read in the fahrenheit temperature
    cout << "Enter fahrenheit temperature:";
    cin >>fht;  


    //compute the equivalent centigrade temperature
    
    cge = (fht-32)*(5.0/9);


    //Print the required output of the program
    cout << fht << " degrees fahrenheit is " << cge << " degrees centigrade.\n";

  
    return 0;
}