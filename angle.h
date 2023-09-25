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
#define PI = 3.14159265

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
			radians = normalize(r);
		}

		void setDegrees(double d) {
			radians = convertToRadians(d);
		}

		double getRadians() {
			return radians;
		}

		double getDegrees() {
			double degrees = convertToDegrees(radians);
			return degrees;
		}

		void display(ostream& out) {
			double degrees = convertToDegrees(radians);
			out.setf(ios::fixed);     // "fixed" means don't use scientific notation
			out.setf(ios::showpoint); // "showpoint" means always show the decimal point
			out.precision(1);         // Set the precision to 1 decimal place of accuracy.
			out << degrees << "degrees";
		}

	private:
		double radians;

		double convertToRadians(double degrees) {
			return normalize(degrees * ((TWO_PI / 2) / 180));
		}

		double convertToDegrees(double radian) {
			return normalize(radian) * (180 / (TWO_PI / 2));
		}

		double normalize(double radian) {
			while (radian < 0 || radian > TWO_PI) {
				if (radian < 0) {
					radian += TWO_PI;
				}
				else {
					radian -= TWO_PI;
				}
			}

			return radian;
		}
};


