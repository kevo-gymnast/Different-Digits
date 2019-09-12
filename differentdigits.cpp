# include <iostream>
#include "functions.h"
using namespace std;

int main(){
	if((b < a) || (a < 0 || b < 0) || (b > 10000)){ // invalid values for a and b //
	cout << "Invalid input" << endl;
	return 0;
	}
	int goodNum = 0;
	for(int i = a; i <= b i++){
		for(int j = 0; j <= 9; j++){
			if(countDigitOccurances(i, j) != 1 && countDigitOccurances(i, j) != 0){
				break;
			} else if(j == 9)
				goodNum ++;
		}
	}
	cout << "There are " << goodNum << " valid numbers between " << a << " and " << b << endl;	
}




