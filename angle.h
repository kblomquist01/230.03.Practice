/*************************************************************
 * 1. Name:
 *      -your name-
 * 2. Assignment Name:
 *      Practice 03: Angle Class
 * 3. Assignment Description:
 *      A class to represent an angle
 * 4. What was the hardest part? Be as specific as possible.
 *      -a paragraph or two about how the assignment went for you-
 * 5. How long did it take for you to complete the assignment?
 *      -total time in hours: reading the assignment, submitting, etc.
 **************************************************************/

#pragma once

#define TWO_PI 6.28318530718

#include <math.h>    // for floor()
#include <iostream>  // for cout
#include <cassert>   // for assert()
using namespace std;

class TestAngle;

 /************************************
  * ANGLE
  ************************************/
class Angle
{
   friend TestAngle;

	public:
		void setRadians(double r){
			radians = r;
		}
		void setDegrees(double d) {
			degrees = d;
		}
		double getRadians() {
			return radians;
		}
		double getDegrees() {
			return degrees;
		}
		double convertToRadians() {
			return 2.2;
		}
		double convertToDegrees() {
			return 2.2;
		}
		void normalize() {
		
		}
		void display() {
			cout << degrees << " degrees " << radians << " radians\n";
		}
	private:
		double radians;
		double degrees;

};

