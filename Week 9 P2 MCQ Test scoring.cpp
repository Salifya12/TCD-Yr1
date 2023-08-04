#include <cmath>
#include<iomanip>
#include <iostream>
#include <string>
using namespace std;

//function to intake data 
void take_info(char set[],int testSize );
//function to grade test by comparing correct answering to given answers
int grade_test(char modelAns[],char stdAns[],int testSize);

int main() {
//Assign test size
const int testSize=20;
//declaration of arrays
char modelAns[testSize],stdAns[testSize];
int stdNum[testSize],grade[testSize];  
//Assignment of i for sake of for loop
int i=0;
  
take_info(modelAns,testSize);
//take in series of student numbers
cin>>stdNum[i];  
//Loop remains running whilst Student input student number is greater than 0
while(stdNum[i]>0){
  take_info(stdAns,testSize);
  grade[i]=grade_test(modelAns,stdAns,testSize);
  //Prep for next iteration
  i++;
  cin>>stdNum[i];  
  }
  //Printing of student numbers and their result
for(int n=0;n<i;n++){
  cout<<stdNum[n]<<": "<<grade[n]<<endl;
}
  
  return 0;
}
void take_info(char set[],int testSize ){
  for(int i=0;i<testSize;i++){
  cin>>set[i];
  }
}
int grade_test(char modelAns[],char stdAns[],int testSize){
  int mark=0;
  for(int i=0;i<testSize;i++){
    //if answer in x add nothing to grade
    if(stdAns[i]=='x'){
      mark=mark+0;
    }
    else if(stdAns[i]==modelAns[i]){
      mark=mark+2;
    }
    else
      mark=mark-1;
  }
  return mark;
}