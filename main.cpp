#include <iostream>
using namespace std;

int main()
{ 
	int num_1, num_2;
	cout << "Enter first number: ";
	cin >> num_1;
	
	cout << "Enter second number: ";
	cin >> num_2;
	if (num_1 != num_2) {
		(num_1 > num_2) ? 
			cout << num_2 << " " << num_1<<endl : 
			cout << num_1 << " " << num_2<<endl;
	}

	system("pause");
	return 0;
}