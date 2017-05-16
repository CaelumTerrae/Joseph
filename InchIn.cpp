#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("InchIn.txt");

	int x;
	fin >> x;
	cout <<  "Breanne will make " << x * 5280 * 6 << " hops\n";


	return 1;
}