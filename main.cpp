#include <iostream>
using namespace std;

int main()
{ 
	//create numbers
	int num_in_1, num_in_2,
		num_in_3, num_in_4,
		num_in_5, num_in_6,
		num_in_7, Max_num;

	//input nubers

	cout << "Enter number 1: ";
	cin >> num_in_1;

	cout << "Enter number 2: ";
	cin >> num_in_2;

	cout << "Enter number 3: ";
	cin >> num_in_3;

	cout << "Enter number 4: ";
	cin >> num_in_4;

	cout << "Enter number 5: ";
	cin >> num_in_5;

	cout << "Enter number 6: ";
	cin >> num_in_6;

	cout << "Enter number 7: ";
	cin >> num_in_7;

	//find max number
	
	(num_in_1 > num_in_2) ? Max_num = num_in_1 :
		Max_num = num_in_1;

	(Max_num > num_in_3) ? Max_num = Max_num :
		Max_num = num_in_3;

	(Max_num > num_in_4) ? Max_num = Max_num :
		Max_num = num_in_4;

	(Max_num > num_in_5) ? Max_num = Max_num :
		Max_num = num_in_5;

	(Max_num > num_in_6) ? Max_num = Max_num :
		Max_num = num_in_6;

	(Max_num > num_in_7) ? Max_num = Max_num :
		Max_num = num_in_7;

	cout << "The Highest Number: " << Max_num
		<< endl;
	system("pause");
	return 0;
}