//use functions to compute the area of a circular track and the distance of one lap along its centre
#include <iostream>
using namespace std;

const double PI = 3.1415;

double circle_area (double diameter);
double ring_area (double circleD, double holeD);
//also declare circumference ...

int main() {
  double outerD, innerD, area, distance, ringDiameter;

  cout << "Enter outer and inner diameters:";
  cin >> outerD >> innerD;

  //compute area and distance using the functions ...
  area=ring_area(outerD,innerD);
  ringDiameter=outerD-innerD;
  ringDiameter=ringDiameter/2;
  ringDiameter=innerD+ringDiameter;
  distance=circle_area(ringDiameter);

  //distance is for the circle half way between outer and inner ...
  

  cout << "Area:" << area << " Distance:" << distance << endl;

  return 0;
}

double circle_area (double diameter) {
  //complete the function body ...
  double radius=diameter/2;
  double circum=2*radius*PI;
  return circum;
}

double ring_area (double circleD, double holeD) {
  //using 2 calls to circle_area compute the area of a ring
double circleRad=circleD/2;
double holeRad=holeD/2;
double circleArea=circleRad*circleRad*PI;
double holeArea=holeRad*holeRad*PI;
double ring_area=circleArea-holeArea;
  return ring_area;
}

//define circumference function ...

