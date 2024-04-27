#include <iostream>
using namespace std;

int main()
{ 
	//create numbers
	int num_in,Max_num;

	//input nubers

	cout << "Enter number 1: ";
	cin >> num_in;
	Max_num = num_in;

	cout << "Enter number 2: ";
	cin >> num_in;
	(Max_num>num_in) ? Max_num = Max_num:
	Max_num = num_in;

	cout << "Enter number 3: ";
	cin >> num_in;
	(Max_num > num_in) ? Max_num = Max_num :
		Max_num = num_in;

	cout << "Enter number 4: ";
	cin >> num_in;
	(Max_num > num_in) ? Max_num = Max_num :
		Max_num = num_in;

	cout << "Enter number 5: ";
	cin >> num_in;
	(Max_num > num_in) ? Max_num = Max_num :
		Max_num = num_in;

	cout << "Enter number 6: ";
	cin >> num_in;
	(Max_num > num_in) ? Max_num = Max_num :
		Max_num = num_in;

	cout << "Enter number 7: ";
	cin >> num_in;
	(Max_num > num_in) ? Max_num = Max_num :
		Max_num = num_in;

	

	cout << "The Highest Number: " << Max_num
		<< endl;
	system("pause");
	return 0;
}