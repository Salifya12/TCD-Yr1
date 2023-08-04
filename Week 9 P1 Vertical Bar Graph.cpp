#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	//declare constants, variables and the array ...
  const int numAmount=70, Ypts=20;
  int numbers[numAmount];

	//read the numbers into the array ...
	  for (int i=0;i<numAmount;i++){
    cin>>numbers[i];
    }
  //print lines starting from top of the graph ...
  
	for (int i=Ypts;i>0;i--){
    if(i<10){
      cout <<" ";
    }
    
  cout << i<<"  "<<"|";
  
  for(int n=0;n<numAmount;n++){
//Print star if given value is greater than or equal to point on Y axis 
  if (numbers[n]>=i){
    cout<<"*";
    }
    else {
      cout<<" ";
    }
    }
  cout<<endl;
  }
	//print the x-axis ...
	for(int i=0;i<7;i++){
cout<<"----|"<<"----+";
  }
cout<<"----|";
  
	return 0;
}