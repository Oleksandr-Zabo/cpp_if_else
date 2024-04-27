#include <iostream>
using namespace std;

int main()
{ 
	int lenth_A_B, lenth_B_C,
		weight, capacity, 
		need_fuel, need_B_C;
	capacity = 300;
	cout << "Enter the distance "
		<<"between A and B: ";
	cin >> lenth_A_B;

	cout << "Enter the distance "
		<< "between B and C: ";
	cin >> lenth_B_C;

	cout << "Enter the weight "
		<< "of the load: ";
	cin >> weight;

	/*	Table of values
	* weight | lenth_A_B | lenth_B_C | need_fuel
	* <0-----------------------------------------
	*  450    |  100      |  250      | 50
	*  600    |  30       |  50       | 20
	*  1400   |  30       |  20       | 50
	*  1600   |  30       |  20       | 150
	* 2000+   -----------------------------------
	*/



	if (weight < 0 || lenth_A_B < 0 || lenth_B_C < 0) {
		cout << "Incorrect data" << endl;
	}
	else {//weight > 0 || lenth_A_B > 0 || lenth_B_C > 0

		if (weight < 500) {
			if (lenth_A_B <= capacity && lenth_B_C <= capacity) {
				//Flight is possible on the entered route
				need_B_C = lenth_B_C;

				need_fuel = need_B_C - (capacity - lenth_A_B);
				(need_fuel > 0) ? cout << "You should refuel: " << need_fuel << " litrs" << endl :
					cout << "You don't need to refuel(0)\n";

			}

			else {
				cout << "Flight is not possible"
					<< " on the entered route" << endl;
			}
		}

		else if (weight < 1000) {
			if ((lenth_A_B <= (capacity / 4)) && (lenth_B_C <= (capacity / 4))) {
				//Flight is possible on the entered route
				need_B_C = lenth_B_C * 4;


				//fixed
				need_fuel = need_B_C - (capacity - lenth_A_B * 4);
				(need_fuel > 0) ? cout << "You should refuel " << need_fuel << " litrs" << endl :
					cout << "You don't need to refuel(0)\n";

			}

			else {
				cout << "Flight is not possible"
					<< " on the entered route" << endl;
			}
		}

		else if (weight < 1500) {
			if ((lenth_A_B <= (capacity / 7)) && (lenth_B_C <= (capacity / 7))) {
				//Flight is possible on the entered route
				need_B_C = lenth_B_C * 7;

				need_fuel = need_B_C - (capacity - lenth_A_B * 7);
				(need_fuel > 0) ? cout << "You should refuel " << need_fuel << " litrs" << endl :
					cout << "You don't need to refuel(0)\n";

			}

			else {
				cout << "Flight is not possible"
					<< " on the entered route" << endl;
			}
		}


		else if (weight < 2000) {
			if ((lenth_A_B <= (capacity / 9)) && (lenth_B_C <= (capacity / 9))) {
				//Flight is possible on the entered route
				need_B_C = lenth_B_C * 9;

				need_fuel = need_B_C - (capacity - lenth_A_B * 9);
				(need_fuel > 0) ? cout << "You should refuel " << need_fuel << " litrs" << endl :
					cout << "You don't need to refuel(0)\n";

			}

			else {
				cout << "Flight is not possible"
					<< " on the entered route" << endl;
			}
		}

		else {
			cout << "The load is too heavy\n";
		}

	}
		

	



	system("pause");
	return 0;
}