#include <iostream>
#include <cmath>
using namespace std;
//check the lab sheet carefully to ensure your functions behave exactly as specified

//declare distance function
double distance (double x1, double y1, double x2, double y2);

//classify triangles function
int triangleType (double x1, double y1, double x2, double y2, double x3, double y3);

//for advanced version
bool veryClose (double x, double y);

int main() {

  double x1, y1, x2, y2, x3, y3;
  int type;
  
  cout << "Enter x1, y1, x2, y2, x3, y3:";
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  //call triangle type to obtain a value for "type"  
  //...
  type=triangleType(x1,y1,x2,y2,x3,y3);

  //report the outcome ...
  cout << "That is ";

  if (type == 3)
  {
	  cout<< "equilateral";
  }
  else if (type==2)
    cout<< "isoceles";
  else if (type==0)
    cout<<"scalene";
    
  cout << ".\n";

  return 0;
}

//define distance and triangleType ...
//make sure to call distance from inside triangleType to compute lengths of sides ...
int triangleType (double x1, double y1, double x2, double y2, double x3, double y3){
  int num_sides=1;
  double length1, length2, length3;
  length1=distance(x1,y1,x2,y2);
  length2=distance(x2,y2,x3,y3);
  length3=distance(x1,y1,x3,y3);
  if(length1==length2||veryClose(length1,length2))
    num_sides=num_sides+1;
  
  if (length1==length3||veryClose(length1,length3))
    num_sides=num_sides+1;

  if (num_sides<=1)
  return 0;
    
  else
 return num_sides;
  
}
double distance (double x1, double y1, double x2, double y2){
  //Computing side length
  double xSq=pow((x2-x1),2);
  double ySq=pow((y2-y1),2);
  double length=sqrt(xSq+ySq);
  return length;
  }



//veryClose is needed for the advanced version / equilateral test
bool veryClose (double x, double y) {
	//return true iff the size of the difference between x and y
  if(fabs(x-y)<0.0001){
 //is less than 0.0001
	//fabs gives the absolute value of a floating point number
    return true;}
  else return false;
}