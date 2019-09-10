# include <iostream>
#include "functions.h"
using namespace std;

int main(){
	
	int a, b, i;
	int ones = 0;
	int tens = 0;
	int hundreds = 0;
	int thousands = 0;
	int counter = 0;
	cout << "Enter numbers a <= b:" << endl;
	cin >> a >> b;
	counter = b - a + 1;
	
	
	if((b < a) || (a < 0 || b < 0) || (b >= 10000)){ // invalid values for a and b //
		cout << "Invalid input" << endl;
		return 0;
	}

	else{ // inputs are valid for both a and b //
		for(i = a; i <= b; i++){
			if(i < 100){
				tens = i / 10;
				ones = i % 10;
//				how many times does the value for both
				//tens and ones occur?
//				cout << tens << ones;
				if(ones == tens)
					counter --;
			}
			else if((i >= 100) && (i < 1000)){			
				hundreds = i / 100;
				tens = (i / 10) % 10;
				ones = i % 10;
				
				if((hundreds == tens)|| (hundreds == ones) || (tens == ones)){
					counter --;
				}
			}
			else{
				int thousands = 0;
				int hundreds = 0;
				int tens = 0;
				int ones = 0;

				thousands = i / 1000;
				hundreds = (i / 100) % 10;
				tens = (i / 10) % 10;
				ones = i % 10;

				if((thousands == hundreds) || (thousands == tens) || (thousands == ones) || (hundreds == tens) || (hundreds == ones) || (tens == ones)){
					counter --;
				}
			}
		}
		cout << "There are " << counter << " valid numbers between " << a << " and " << b << endl;
		return 0;
	}
}




