#include <iostream>
using namespace std;

int main()
{ 
	int num_in, 
		digit_1, digit_2, 
		digit_3, digit_4,
		digit_5, digit_6;
	cout << "Enter your number: ";
	cin >> num_in;
	if (num_in > 99999 && num_in < 1000000) {
		digit_1 = num_in % 10;
		num_in /= 10;

		digit_2 = num_in % 10;
		num_in /= 10;

		digit_3 = num_in % 10;
		num_in /= 10;

		digit_4 = num_in % 10;
		num_in /= 10;

		digit_5 = num_in % 10;
		num_in /= 10;

		digit_6 = num_in % 10;
		
		((digit_1+ digit_2+ digit_3) == (digit_4 + digit_5 + digit_6)) ?
			cout << "Your number is lucky\n": 
			cout << "Your number is not lucky\n";

	}
	else {
		cout << "The number is not six digits\n";
	}
	
	system("pause");
	return 0;
}