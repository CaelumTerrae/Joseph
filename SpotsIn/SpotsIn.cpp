#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#define PI 3.141592
using namespace std;

double absolute(double x){
	if(x<0){
		return -1 * x;
	}else{
		return x;
	}
}

int main(){
	ifstream fin("SpotsIn.txt");
	int numberOfProperties;
	fin >> numberOfProperties;
	cout << setprecision(2) << fixed;

	for(numberOfProperties = numberOfProperties; numberOfProperties > 0; numberOfProperties--){
		//Loop iterates through all properties correctly

		int xCenter, yCenter, numOfSpotlights;
		double totalIntensity;
		totalIntensity = 0;
		fin >> xCenter >> yCenter >> numOfSpotlights;
		

		for(numOfSpotlights = numOfSpotlights; numOfSpotlights > 0; numOfSpotlights--){
			int xSpot, focusAngle, intensity;
			fin >> xSpot >> focusAngle >> intensity;
			if (atan((double)yCenter / absolute(xCenter-xSpot)) * 180 / PI > 90 - focusAngle){
				totalIntensity += (double)(intensity) / (yCenter * yCenter + (xCenter-xSpot) * (xCenter-xSpot));
			}

			/*
			if(atan(yCenter / (xCenter-xSpot)) * 180 / PI < 90 - focusAngle){
				totalIntensity += 0;
			}else{
				totalIntensity += intensity / (yCenter * yCenter + (xCenter-xSpot) * xCenter-xSpot);
			}
			*/
		}
		cout << totalIntensity << endl;
	}

}