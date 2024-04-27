#include <iostream>
using namespace std;

int main()
{ 
	int user_in;
	cout << "Enter number: ";
	cin >> user_in;

	(user_in % 2 == 0) ? cout 
		<< "Your number is even" << endl : cout 
		<< "Your number is odd" << endl;

	system("pause");
	return 0;
}