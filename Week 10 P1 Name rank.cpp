//Week 10 P1 name rank
#include <iostream>
#include <string>
using namespace std;

const int NUM_NAMES = 10;

int search (string s, const string sarray[], int size);
//returns the position of s in sarray or -1 if not found

int main () {
    string girls [NUM_NAMES] = {"Grace", "Fiadh", "Emily", "Sophie", "Ava", "Amelia", "Ella", "Hannah", "Lucy", "Alex"};
    string boys [NUM_NAMES] = {"Jack", "James", "Noah", "Daniel", "Conor", "Finn", "Liam", "Fionn", "Alex", "Charlie"};
  int position[NUM_NAMES]={1,2,3,4,5,6,7,8,9,10};
    //source https://www.independent.ie/news/revealed-irelands-top-baby-names-in-2020-40134889.html
    //adapted by insertion of Alex in each list to test corect logic where a name appears on both lists
    
    //declare other variables ...
string test_name;
  int mostPop;
string response="Yes";    
    //set up a loop to run the program repeatedly ...

	    //get the name to be searched ...
      
      //search for it in both lists ...

      //take appropriate action ...
      
      //ask about going again ...

      
      //these are some of the output statements you should use in your program
  while(response=="Yes"){
      cout << "Enter a name to search for:";
  cin>>test_name;

  mostPop=search(test_name,girls,NUM_NAMES);
  if(mostPop!=-1){
    cout << test_name << " is ranked " << position[mostPop] << " in top girls name.\n";
  }
    if(mostPop==9){
      mostPop=search(test_name,boys,NUM_NAMES);
       cout << test_name << " is ranked " << position[mostPop] << " in top boys name.\n";
    }
  if(mostPop==-1){
    mostPop=search(test_name,boys,NUM_NAMES);
  
    if(mostPop!=-1){
    cout << test_name << " is ranked " << position[mostPop] << " in top boys name.\n";
  }
  }
  if (mostPop==-1){
      cout << test_name << " is not in the top " << NUM_NAMES << " for girls or boys.\n";}

      cout << "Look up the rank of another name? Enter No to end:"; 
  cin >> response;

  }
  
      //
	
    return 0;
}

int search (string s, const string sarray[], int size) {
//returns the position of s in sarray or -1 if not found
    for (int i=0; i < size; i++) {
        if (sarray[i] == s) {
            return i;
        }
    }
    //if we get here we didn't find s in the array
    return -1;
}