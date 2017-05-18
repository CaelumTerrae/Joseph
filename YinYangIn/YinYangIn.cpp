#include <iostream>
#include <iomanip>
#include <fstream>
#define PI 3.141592653589793
using namespace std;

int main(){
	fstream fin("YinYangIn.txt");
	int num;
	fin >> num;
	cout << setprecision(3) << fixed;
	for(num = num; num > 0; num--){
		int outer, upIn, lowIn;
		double totalArea, darkArea;
		fin >> outer >> upIn;
		lowIn = outer - upIn;

		totalArea = outer * outer * PI;

		darkArea = (totalArea / 2.0) - (upIn * upIn * PI) / 2.0 + (lowIn * lowIn * PI)/2.0;
		cout << darkArea << " " << totalArea - darkArea << endl;
	}
	return 1;
}