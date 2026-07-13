#include <iostream>
using namespace std;
int main() {
	int x, y, choice;
	cout << "Enter two values: ";
	cin >> x >> y;
	while(1) {
		cout << "\n---Calcultor---\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n6. Exit\nEnter your choice: ";
		cin >> choice;
		switch(choice) {
			case 1:
				cout << "Sum is: " << x + y;
				break;
			case 2:
				cout << "Difference is: " << x - y;
				break;
			case 3:
				cout << "Product is: " << x * y;
				break;
			case 4:
				cout << "Division is: " << x / y;
				break;
			case 5:
				cout << "Remainder is: " << x % y;
				break;
			case 6:
				cout << "Exiting...";
				exit(1);
			default:
				cout << "Invalid choice.\n";
		}
	}
	return 0;
}
