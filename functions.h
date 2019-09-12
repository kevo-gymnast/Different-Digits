#ifindef FUNCTIONS_H
#define FUNCTIONS_H

# include <iostream>
using namespace std;

int countDigitOccurances(int n, int digit){
	int len = 0;
	do{
		len ++;
		n / 10;
	}while(n > 0)

	int ten_thousands = i / 10000;
	int thousands = (i / 1000) % 10;
	int hundreds = (i / 100) % 10;
	int tens = (i / 10) % 10;
	int ones = i % 10;
	int counter = 0;
		case(len){
			case 1:
				return 1;
			
			case 2:
				if(digit == ones){
					counter ++
				}
				if(digit == tens){
					counter ++;
				}
			break;
			
			case 3:
				if(digit == ones){
					counter ++
				}
				if(digit == tens){
				counter ++;
				}
				if(digit == hundreds){
				counter ++;
				}	
			break;
			
			case 4:
				if(digit == ones){
					counter ++
				}
				if(digit == tens){
					counter ++;
				}
				if(digit == hundreds){
					counter ++;
				}
				if(digit == thousands){
					counter ++;
				}
								if(digit == ones){
					counter ++
				}
				if(digit == tens){
					counter ++;
				}
				if(digit == hundreds){
					counter ++;
				}
				if(digit == thousands){
					counter ++;
				}
			break;

			case 5:
				if(digit == ones){
					counter ++
				}
				if(digit == tens){
					counter ++;
				}
				if(digit == hundreds){
					counter ++;
				}
				if(digit == thousands){
					counter ++;
				}
				if(digit == ones){
					counter ++
				}
				if(digit == tens){
					counter ++;
				}
				if(digit == hundreds){
					counter ++;
				}
				if(digit == thousands){
					counter ++;
				}
				if(digit == ten_thousands){
					counter ++;
				}
			break;

		}
	return counter;	
}

#endif