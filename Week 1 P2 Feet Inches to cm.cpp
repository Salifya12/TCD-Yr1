//Converts feet and inches to centimetres//
//Worth 6 points
#include <iostream>
using namespace std;

int main () {
    int ft, inches;//integer variables
    double centimetres;//a decimal variable for the answer

    //Prompt for and read the number of feet in to the variable ft
    cout <<"Enter feet value:";
    cin >> ft;


    //Prompt for and read  the number of inches in to the variable inches
    cout <<"Enter inches value:";
    cin >>inches;


    //compute the number of centimetres from the ft and inches values
    //one foot is 12 inches and 1 inch is 2.54cm
    //So 5 foot 7 inches is 67 inches which is 170.18cm
    
   centimetres = ((12 * ft)+inches)*2.54;
     //...

    //This prints the required output of the program
    cout << ft << " feet " << inches << " inches is ";
    cout << centimetres << "cm.\n";
  
    return 0;
}