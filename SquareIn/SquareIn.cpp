#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream fin("SquareIn.txt");
	int numValues;
	fin >> numValues;
	for(int x = 0; x < numValues; x++){
		long N;
		fin >> N;
		cout << (N * (N + 1) * (2 * N + 1)) / 6 << endl;
	}
	return 1;
}