#include <iostream>
using namespace std;

int main()
{
	int num_in,
		digit_1, digit_2,
		digit_3, digit_4;
	cout << "Enter your number: ";
	cin >> num_in;
	if (num_in > 999 && num_in < 100000) {
		digit_4 = num_in % 10;
		num_in /= 10;

		digit_3 = num_in % 10;
		num_in /= 10;

		digit_2 = num_in % 10;
		num_in /= 10;

		digit_1 = num_in % 10;

		cout << digit_2 << digit_1 
			<< digit_4 << digit_3 
			<<endl;

	}
	else {
		cout << "The number is not four digits\n";
	}

	system("pause");
	return 0;
}