#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Function to read values into array
void read_to_sentinel(double sequence[],int& size,int Capacity,double sentinel);

//Declaration of all functions used to find statistics
double mean(const double array[],  int Capacity);
double std_dev(const double array[],  int Capacity);
double vari(const double array[],  int Capacity);
int num_x(const double array[],  int Capacity);



int main() {
  //Declaration of array
const int Capacity=100;
int x_crosses,size;
double sequence[Capacity],avg,std_deviation,variance;
const double SENTINEL=9999;
  //Read in Values
read_to_sentinel(sequence,size,Capacity,SENTINEL);

  //Assign each function to stat in main
  //Use of Size rather than capacity for simplicity
avg = mean(sequence,size);
variance = vari(sequence,size);
std_deviation = std_dev(sequence,size);
x_crosses = num_x(sequence,size);

  //Print results
  cout<<"Count:"<<size<<endl;
  cout <<"Mean:"<<avg<<endl;
  cout<<"Variance:"<<variance<<endl;
  cout<<"Std. Dev.:"<<std_deviation<<endl;
  cout<<"Zero Xs:"<<x_crosses<<endl;

return 0;
}
void read_to_sentinel(double sequence[],int& size,int Capacity,double sentinel){
  //Updates size in main
  size=0;
  cin>>sequence[size];
  //Sentinel controlled loop
  while((sequence[size]!=sentinel)&&(size<Capacity)){
    size=size+1;
     if(size==Capacity){
      cout<<"\nWARNING OVERFLOW Only first 100 numbers handled.\n";
      }
      //Take in values so long as number pf inputted values is less than array capacity
    else     
    cin>>sequence[size];
    }
 
}

double mean(const double array[],int Capacity){
  double avg,sum=0.0;
//Add all values in order to find mean
  for(int size=0;size<Capacity;size++){
    sum=sum+array[size];
  }
  
avg=(sum/Capacity);
  
  return (avg);
}

double std_dev(const double array[],  int Capacity){
  //Use variance funtion to find standard deviation
return(sqrt(vari(array,Capacity)));
}
double vari(const double array[],  int Capacity){
  int size;
  
  double mean,variance,sum=0;
  
  for(size=0;size<Capacity;size++){
    sum=sum+array[size];
  }
  
  mean=sum/Capacity;
  
  sum=0;
 for(size=0;size<Capacity;size++){
  double current_value=array[size];
   //Square each difference from mean
 sum=pow((current_value-mean),2)+sum; 
 }
  
variance=sum/(Capacity-1);
  
return(variance);
}

int num_x(const double array[],  int Capacity){
  int sum=0;
  
  double prev_value=array[0];
  
  for(int size=1;size<Capacity;size++){
    double current_value=array[size];
    if((current_value*prev_value)<0){
       sum=sum+1;
    }
    prev_value=current_value;
    
  }
  return sum;
}