#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	cout << setprecision(2) << fixed;
	ifstream fin("ChangeIn.txt");
	int n;
	fin >> n;

	for(int x = 0; x < n; x++){
		int quantity;
		double askPrice, paidPrice;
		fin >> quantity >> askPrice >> paidPrice;

		double diff = quantity * askPrice - paidPrice;
		
		if(diff >= 0){
			cout << "Please pay an additional $" << diff << endl;
		}else{
			cout << "Your change is $" << -1*diff << endl;
		}
	}
}