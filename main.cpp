#include <iostream>
using namespace std;

int main()
{
	int num_in;
	cout << "Enter your number: ";
	cin >> num_in;
	if (num_in != 0) {
		(num_in > 0) ?
			cout << "Your number is positive" << endl :
			cout << "Your number is negative" << endl;
			
	}
	
	else{
		cout << "Your number is zero(0)" << endl;
	}
	
	system("pause");
	return 0;
}