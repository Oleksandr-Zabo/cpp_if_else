#include <iostream>
using namespace std;

int main()
{ 
	int num_1, num_2;
	cout << "Enter first number: ";
	cin >> num_1;
	cout << "Enter second number: ";
	cin >> num_2;
	(num_1 >= num_2) ? cout << "Lower number: " 
		<< num_2 <<endl : cout << "Lower number: " 
		<< num_1 << endl;

	system("pause");
	return 0;
}